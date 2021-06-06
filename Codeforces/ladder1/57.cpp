#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[50];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    sort(arr, arr+m);
    int minDiff=INT_MAX;

    for(int i=0;i<m-n+1;i++){
        if(arr[i+n-1] - arr[i]<minDiff){
            minDiff = arr[i+n-1] - arr[i];
        }
    }
    cout<<minDiff<<endl;
    return 0;
}