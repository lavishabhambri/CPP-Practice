#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            a=1;
            break;
        }
    }

    if(a==0){
        cout<<arr[n-1]+1<<endl;
    }
    return 0;
}