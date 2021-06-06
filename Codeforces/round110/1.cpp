#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s[4], s2[4];
        for(int i=0;i<4;i++){
            cin>>s[i];
            s2[i]=s[i];
        }
        sort(s2, s2+4);
        int first=s2[2], second=s2[3];
        if((max(s[0], s[1])==first && max(s[2], s[3])==second) || (max(s[0], s[1])== second && max(s[2], s[3])==first)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;

    }


    return 0;
}