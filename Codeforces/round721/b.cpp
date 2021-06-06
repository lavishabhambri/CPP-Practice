#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int count_0 = 0;
        for(int i=0;i<l;i++){
            if(s[i]=='0') count_0++;
        }

        if(count_0>1 && l%2==1 && s[l/2]=='0') cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}