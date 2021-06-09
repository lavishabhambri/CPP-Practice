#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=0) neg++;
        }

        sort(arr, arr+n);
        if(neg==n){
            cout<<neg<<endl;
        }else{
            int a=1;
            for(int i=0;i<neg-1;i++){
                
                if(abs(arr[i]-arr[i+1])<arr[neg]){
                    a=0;
                    break;
                }
            }
            if(a==1){
                cout<<neg+1<<endl;
            }else{
                cout<<neg<<endl;
            }
        }
    }
}