#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int P[n+1];
        for(int i=1;i<=n;i++){
            cin>>P[i];
        }

        for(int i=1;i<=n;i++){
            if(P[i] != i){
                cout<<0<<endl;
                break;
            }
        }
        if(P[1] == 1 && P[n] == n){
            cout<<1<<endl;
        }else if(P[1] == n && P[n]==1){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}