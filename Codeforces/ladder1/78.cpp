#include<iostream>
using namespace std;

int main(){
    long int y,k,n;

    cin>>y>>k>>n;
    int x=k-y%k;
    int max=n-y;
    int a=0;
    for(x; x<=max;x+=k){
        cout<<x<<" ";
        a=1;
    }
    if(a==0){
        cout<<-1;
    }
    cout<<endl;
    return 0;
}