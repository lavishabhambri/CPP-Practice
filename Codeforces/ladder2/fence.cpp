#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    long long int sum[n-k+1] = {0};
    for(int i=0;i<k;i++){
        sum[0] += arr[i];
    }

    long long int min = sum[0], minIndex=0;

    for(int i=1;i<n-k+1;i++){
        sum[i] = sum[i-1] + arr[i+k-1] - arr[i-1];
        // cout<<sum[i]<<" ";
        if(min > sum[i]){
            min = sum[i];
            minIndex = i;
        }

    }

    cout<<minIndex+1<<endl;

    return 0;
}