#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int c[3] = {0,0,0};
        int x;

        for(int i=0;i<n;i++){
            cin>>x;
            c[x%3]++;
        }

        int count=0;
        for(int i=0;i<12;i++){
            if(c[i%3] > n/3){
                int k = c[i%3] - n/3;
                c[(i+1)%3] += k;
                count += k;
                c[i%3] -= k;
            }
        }

        cout<<count<<endl;

    }
}