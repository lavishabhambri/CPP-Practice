#include<bits/stdc++.h>
using namespace std;
int D[3];
int solve(int n, int* output){
    if(n==0) return 0;

    if(n<0) return 0;


    if(output[n] > -1){
        return output[n];
    }

    return 1+max(solve(n-D[0], output), max(solve(n-D[1], output), solve(n-D[2], output)));
}

int main(){

    int n;
    cin>>n;
    int D[3];
    cin>>D[0]>>D[1]>>D[2];
    
    int output[n+1];
    output[0] = 0;
    for(int i=1;i<=n;i++){

    }
    
    cout<<solve(n,output);
    return 0;
}