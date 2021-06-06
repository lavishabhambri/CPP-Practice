#include<bits/stdc++.h>
using namespace std;
void ans(int w, int h, long int n){
    
    int count=1;
    
    while(h%2==0){
        count*=2;
        h=h/2;
    }

    while(w%2==0){
        count*=2;
        w=w/2;
    }

    if(count>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t,w,h;
    long int n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>w>>h>>n;
        ans(w,h,n);
    }
    return 0;
}