#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int a=1;
    for(int i=0;i<n;i++){
        if(s[i]=='W' && s[i+1] =='U' && s[i+2]=='B'){
            i+=2;
            if(a==0){
                cout<<" ";
            }
            continue;
        }else{
            a=0;
            cout<<s[i];
        }
    }
    
    return 0;
}