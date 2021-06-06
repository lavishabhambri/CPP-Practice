#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int t,x,k,n;
    cin>>t;
    while(t--){
        cin>>n>>x>>k;
        long long int y = (n+1)%k;
        if(x%k == 0 || x%k==y){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}