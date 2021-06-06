#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,a,b,c;
    cin>>n>>a>>b>>c;
    int small = min(a, min(b,c));
   
    long int count=0;
    if(n%small==0){
        cout<<n/small<<endl;
        return 0;
    }else{
        for(int i=0; i<=n/a; i++){
            for(int j=0; i*a+b*j<=n; j++){
                int val=n-a*i-b*j;
                if(val%c==0){
                    long int k=val/c;  
                    count = max(count, i+j+k); 
                }
                
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

