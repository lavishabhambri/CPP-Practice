#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int arr2[n];
        int s=0,e=n-1;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                arr2[s++] = arr[i];
            }else{
                arr2[e--] = arr[i];
            }
        }

        ll count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr2[i], 2*arr2[j]) > 1){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}