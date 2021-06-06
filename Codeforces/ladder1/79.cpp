#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    char s[200];
    cin>>s;
    char s1[100],s2[100];
    strncpy(s1, s, n);
    int j=0;
    for(int i=n;i<2*n;i++){
        s2[j]=s[i];
        j++;
    }
    sort(s1, s1+n);
    sort(s2, s2+n);
    int a=1, b=0;
    if(s1[0] < s2[0]){
        a=2;
    }

    if(a==1){
        for(int i=0;i<n;i++){
            if(s1[i] <= s2[i]){
                cout<<"NO";
                b=1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(s1[i] >= s2[i]){
                cout<<"NO";
                b=1;
                break;
            }
        }
    }
    if(b==0){
        cout<<"YES";
    }
    
    cout<<endl;
}