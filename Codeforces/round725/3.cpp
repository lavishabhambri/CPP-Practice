#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, l, r;
        cin>>n>>l>>r;
        vector<ll>arr;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        ll count =0;

        set<pair<int, int>> st;

        for(int i=0;i<n;i++){
            ll l_ = l-arr[i];
            ll r_ = r-arr[i];
            count += (upper_bound(arr.begin(), arr.end(), r_) - lower_bound(arr.begin(), arr.end(), l_));
            
            if (l <= 2 * arr[i] && 2 * arr[i] <= r) { // mid conditions
                count--;
            }
        }

        cout<<count/2<<endl; // as we are adding twice
    }

    return 0;
}