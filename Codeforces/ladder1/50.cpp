#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k;
    cin>>k;
    cin>>s;
    string ans;

    int n=s.length();
    int freq[26]={0};
    for(int i=0;i<n;i++){
        int a = s[i]-'a';
        freq[a]++;
    }

    int j=0;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            if(freq[i]%k != 0){
                cout<<-1<<endl;
                return 0;
            }else{
                ans.append(freq[i] / k, 'a' + i);
            }
        }
    }

    for(int i=0;i<k;i++){
        cout<<ans;
        
    }
    cout<<endl;
    return 0;
}