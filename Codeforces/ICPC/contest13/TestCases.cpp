#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
    freopen("cases.in","r",stdin);
    int t;
    cin>>t;
    int count[1000005]={0};
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll ans=0, val=0;
        for(int i=0; i<n; i++)
        {
            ans = 0;
            for(int j=i; j<n; j++)
            {
                count[arr[j]]++;
                if(count[arr[j]]%2!=1)
                    ans--;
                else
                    ans++;
                if(ans == 1)
                    val++;
            }
            for (int j=i; j<n; j++){
                count[arr[j]]=0;
            }
                
        }
        cout<<val<<endl;
    }
    fclose(stdin);
    return 0;
}