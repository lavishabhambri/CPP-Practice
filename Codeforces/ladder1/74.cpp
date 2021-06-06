#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[105];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int val=1, max=1;

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            val++;
            if(val>max){
                max=val;
            }
        }else{
            val=1;
        }
    }

    if(max<=(n+1)/2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}