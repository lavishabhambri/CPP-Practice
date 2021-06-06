#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n=s.length();
    int k[n];
    int precalculate[n+1];
    precalculate[1] = 0;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            precalculate[i+1] = precalculate[i] + 1; 
        }
        else{
            precalculate[i+1] = precalculate[i];
        }
    }

    while(m--){
        int l,r;
        cin>>l>>r;
        
        cout<<precalculate[r] - precalculate[l]<<endl;
        
        
    }



    return 0;
}