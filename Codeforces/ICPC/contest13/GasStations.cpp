#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countG = 0, countN = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '+') countG++;
            else countN++;
        }
        int half = n/2;
        if(n%2!=0) half++;

        if(countG == 1) cout<<n/2;
        else if(countG == half) cout<<0;
        else if(countG > n/2) cout<<1;
        else cout<<n/pow(2, countG);

        cout<<endl;

    }
}