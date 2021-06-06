#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n;
    long int d;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1){
        cout<<d<<endl;
        return 0;
    }

    int count = d;

    for(int i=1;i<d+1;i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            count-=1;
        }
    }
    cout<<count<<endl;
    
    return 0;
}