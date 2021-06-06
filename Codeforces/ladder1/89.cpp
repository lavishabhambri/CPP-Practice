#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int arr[300000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    long long count=0;
    for(int i=0;i<n;i++){
        count += abs(i+1 - arr[i]);
    }
    cout<<count<<endl;
    return 0;
}