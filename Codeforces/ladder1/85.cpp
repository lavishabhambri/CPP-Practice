#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100000], count_25=0, count_50=0, count_100=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(arr[0]>25){
        cout<<"NO";
        return 0;
    }
    long int change, money=0;
    for(int i=0;i<n;i++){
        change=arr[i]-25;
        if(arr[i]==100){
            if(count_50>0){
                if(count_25<1){
                    cout<<"NO"<<endl;
                    return 0;
                }else{
                    count_25--;
                    count_50--;
                }
            }else{
                if(count_25<3){
                    cout<<"NO"<<endl;
                    return 0;
                }else{
                    count_25 -=3;
                }
            }
            count_100++;
        }
        else if(arr[i]==50){
            if(count_25<1){
                cout<<"NO"<<endl;
                return 0;
            }else{
                count_25--;
            }
            count_50++;
        }else{
            count_25++;
        }  
    }
    cout<<"YES"<<endl;
    return 0;
}