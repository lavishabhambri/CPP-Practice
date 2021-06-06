#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int len=2, a=2;
    if(n==1){
        len=1;
    }
    for(int i=2;i<n;i++){
        if(arr[i-1] + arr[i-2] == arr[i]){
            a++;
        }else{
            a=2;
        }
        len = max(len, a);
    }
    cout<<len<<endl;
    return 0;
}