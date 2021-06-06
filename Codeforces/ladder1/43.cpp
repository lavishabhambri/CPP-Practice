#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int j=n-1;
    for(int i=0;i<n;i++){
        if(s1[i] != s2[j]){
            cout<<"NO"<<endl;
            return 0;
        }
        j--;
    }
    cout<<"YES"<<endl;
    return 0;
}