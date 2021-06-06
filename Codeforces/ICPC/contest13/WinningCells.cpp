#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{   
    freopen("chess.in","r",stdin);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans;
        if (n != k+1)
        {
            ll v,a;
            v = (n-1) / (k+1);
            a = 2*v + 1;
            ans = (n*n) - (k+1) - ((k+1) * (3+a) * v/2);
            if ((n % (k+1)) != 0){
                ans += (((k+1)-n%(k+1))*a);
            }
        }
            
        else
        {
            ans = n*(n-1);
        }
        cout<<ans<<endl;
    }
    fclose(stdin);
    return 0;
}