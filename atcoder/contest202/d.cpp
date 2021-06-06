#include <bits/stdc++.h>
using namespace std;
  
// Function to print nth permutation


int main(){
    long long int A,B,K;
    cin>>A>>B>>K;
    string s = "";

    vector<vector<int>> ncr(61, vector<int>(61));
    ncr[0][0]=1;
    
    for(int n=1;n<61;n++){
        ncr[n][0] = 1;
        
        for(int r=1;r<n;r++){
            ncr[n][r] = ncr[n-1][r] + ncr[n-1][r-1];
        }
        ncr[n][n] = 1;
    }

    int n=A+B;
    for(int i=0;i<n;i++){
        int count=ncr[A+B-1][B]; //FOR A
        if(count >= K){
            cout<<'a';
            A--;

        }else{
            cout<<'b';
            B--;
            K -= count;
        }

    }

}