#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        for(int j=i;i*i+j*j<=n*n;j++){
            int sq_rt = sqrt(i*i + j*j);
            if(sq_rt*sq_rt==i*i+j*j){
                count++;
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}