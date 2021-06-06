#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }

    int s=0, e=k;
    while(e>=s){
        int temp=arr[e];
        arr[e] = arr[s];
        arr[s] = temp;
        s++;
        e--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}