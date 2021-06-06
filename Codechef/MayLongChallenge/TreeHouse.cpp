#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int maxN = 3E5 + 5;
const int MOD  = 1E9 + 7;

vector<int> adj[maxN], subval, val;
vector<pair<int, int>> ch;


void dfs(int now, int last=-1){
    for(auto x:adj[now]){
        if(x==last) continue;
        else dfs(x, now);
    }
    
    ch.clear();
    for(auto x:adj[now]){
        if(x!=last) ch.emplace_back(subval[x], x);
    }
    sort(rbegin(ch), rend(ch));
    int tok=1;
    for(auto [_val, id]:ch) val[id] = tok++;
    for(auto x:adj[now]){
        if(x!=last) subval[now] += val[x] * subval[x];
    }
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        subval.assign(n,1);
        val.assign(n,0);
        for(int i=0;i<n;i++) vector<int>().swap(adj[i]);

        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        dfs(0);
        cout<<subval[0]%MOD * x%MOD<<endl;
    }    

    return 0;
}