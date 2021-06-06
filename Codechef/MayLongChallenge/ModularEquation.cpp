#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    long long int n,m;
    while(t--){
        cin>>n>>m;
        long long int ans=0;
        vector<long long int> modVec(n+1, 1);
        for(long long int i=2;i<=n;i++){
            long long int mod1 = m%i;
            ans += modVec[mod1];
            for(long long int j=mod1;j<=n;j+=i){
                modVec[j]++;
            }
        }
        cout<<ans<<endl;
    }
}