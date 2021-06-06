#include<bits/stdc++.h>
#include<climits>
using namespace std;

typedef long int ll;

int main(){
    int n;
    cin>>n;
    ll l[100000],r[100000];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }

    int index=1;
    ll l_min=l[0], r_max=r[0];
    for(int i=1;i<n;i++){
        if(l[i]<=l_min && r_max <= r[i]){
            index=i+1;
        }else if(l[i]<l_min || r_max < r[i]){
            index=-1;
        }
        l_min = min(l_min, l[i]);
        r_max = max(r_max, r[i]);
    }
    cout<<index<<endl;
}