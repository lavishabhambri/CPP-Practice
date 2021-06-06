#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int s[101]={0};
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            s[i] = 1;
        }else{
            s[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}