#include<iostream>
using namespace std;

int main(){
    long long int t,x,a,b;
    cin>>t;
    while(t-->0){
        cin>>x>>a>>b;
        cout<<(a+(100-x)*b)*10<<endl;
    }
    return 0;
}