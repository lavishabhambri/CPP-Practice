#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum(ll x){
    if (x < 0) return -1;
    ll s = 0;
    while(x)
    {
        s += x%10;
        x /= 10;
    }
 
    return s;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<ll>ans;
    // int count=0;
    for(int i=1;i<=81;i++){
        ll x = b*pow(i,a)+c;
        if(sum(x) == i && x<1000000000){
            // count++;
            ans.push_back(x);
        }
    }
    int k=ans.size();
    cout<<k<<endl;
    for(int i=0;i<k;i++) cout<<ans[i]<<" ";


}