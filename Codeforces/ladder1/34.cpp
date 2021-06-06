#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    int val = arr[0],i=0;
    while(n > val){
        i = (i+1)%7;
        val += arr[i];
    }

    cout<<i+1<<endl;
    return 0;
}