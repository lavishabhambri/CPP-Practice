#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='6'){
            cout<<'9';
        }else if(s[i]=='9') cout<<'6';
        else cout<<s[i];
    }


    return 0;
}