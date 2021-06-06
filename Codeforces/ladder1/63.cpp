#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    cin>>s;
    int map[26]={0};
    int n=s.length(), odd=0;
    for(int i=0;i<n;i++){
        int c=s[i]-'a';
        map[c]++;
    }

    for(int i=0;i<26;i++){
        if(map[i]%2!=0){
            odd++;
        }
    }

    if(odd==0 || odd==1 || (odd>2 && odd%2!=0)){
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
    
    return 0;
}