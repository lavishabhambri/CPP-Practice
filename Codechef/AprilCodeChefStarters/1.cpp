#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        if(x < xr*d || y< yr*d){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }


    return 0;
}