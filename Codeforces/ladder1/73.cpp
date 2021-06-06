#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int index;
    int a=0, b=0;

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            b=1;
        }
    }

    if(b==1){
        for(int i=0;i<n;i++){
            if(s[i]=='0' && a==0){
                a=1;
                continue;
            }
            cout<<s[i];
        }
    }else{
        for(int i=0;i<n-1;i++){
            cout<<s[i];
        }
    }
    
    cout<<endl;
    return 0;
}