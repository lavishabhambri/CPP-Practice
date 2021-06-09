#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int a=1;
        for(int i=0;i<n;i++){
            if(arr[i] != i+1){
                a=0;
            }
        }
        if(a==1){
            cout<<0<<endl;
        }
        else{
            // 1
            if(arr[0]==1 || arr[n-1]==n){
                cout<<1<<endl;
            }else if(arr[0]==n && arr[n-1]==1){
                cout<<3<<endl;
            }else{
                cout<<2<<endl;
            }
        }

    }
    return 0;
}