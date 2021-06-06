#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100],sum=0,count=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }


    for(int i=1;i<6;i++){
        int a=(n+1)*i+1;
        if(a==sum+1 || a==sum+2 || a==sum+3 || a==sum+4 || a==sum+5){
            count--;
        }
    }
    
    cout<<count<<endl;
    return 0;
}