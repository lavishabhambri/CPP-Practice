#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }

        int ans[k];
        int freq[n+1] = {0};

        for(int i=0;i<k;i++){
            if(arr[i] < n+1){
                freq[arr[i]]++;
            }
        }

        // for(int i=1;i<n+1;i++){
        //     cout<<freq[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"___________"<<endl;
        int l=0;
        for(int i=1;i<=n;i++){
            if(freq[i] >= 2){
                ans[l++] = i;
            }
        }
        cout<<l<<" ";
        for(int i=0;i<l;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}