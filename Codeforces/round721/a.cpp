#include<bits/stdc++.h>
using namespace std;

vector<long long int> solve(long long int n){
    vector<long long int> ans;
    long long int p=1;
    while(n>0){
        if(n&1){
            ans.push_back(p);
        }
        n >>=1;
        p *=2;
    }
    return ans;
}

int main(){
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>ans = solve(n);
        int l=ans.size();
        cout<<ans[l-1]-1;
        cout<<endl;
    }

    return 0;
}