#include <iostream>
#include<math.h>
using namespace std;

int prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a=0;
    for(int i=n+1;i<=m;i++){
        if(prime(i)){
            if(i==m){
                cout<<"YES";
                a=1;
            }else{
                break;
            }
        }
        
    }

    if(a==0){
        cout<<"NO"; 
    }
    return 0;
}