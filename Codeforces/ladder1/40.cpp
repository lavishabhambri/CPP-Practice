#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int input[1000],count_5=0, count_0=0;
    for(int i=0;i<n;i++){
        cin>>input[i];
        if(input[i] == 5){
            count_5++;
        }else{
            count_0++;
        }
    }

    
    if(count_0 == 0){
        cout<<-1<<endl;
        return 0;
    }else if(count_5 < 9){
        cout<<0<<endl;
        return 0;
    }else{
        int noOfFive = count_5 - count_5%9;
        for(int i=1;i<=noOfFive;i++){
            cout<<5;
        }

        for(int i=1;i<=count_0;i++){
            cout<<0;
        }
    }
    cout<<endl;



    return 0;
}
