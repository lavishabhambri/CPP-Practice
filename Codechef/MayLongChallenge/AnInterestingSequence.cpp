#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    long long int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        long long int count=0;
        // if(k%2==0){
        //     for(long long int i=1; i<=2*k; i=i+2){
        //         count += __gcd(k+i*i, 2*i+1);
        //     }
        // }else{
        //     for(long long int i=2; i<=2*k; i=i+2){
        //         count += __gcd(k+i*i, 2*i+1);
        //     }
        // }

        for(long long int i=1; i<=2*k; i++){
            // if(k+i*i % (2*i+1)==0) count += (2*i+1);
            // else count+=1;
            cout<<__gcd(k+i*i, 2*i+1)<<" ";
            count += __gcd(k+i*i, 2*i+1);
            
        }
        

        cout<<"COUNT: "<<count<<endl;
    }
    return 0;
}