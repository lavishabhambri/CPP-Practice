#include<iostream>
using namespace std;

int main(){
    long int n,m;
    
    cin>>n>>m;
    int arr[100000];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    long long int count = arr[0]-1;

    for(int i=0;i<m-1;i++){
        if(arr[i] > arr[i+1]){
            count += (n+ arr[i+1] - arr[i]);
        }else{
            count += (arr[i+1] - arr[i]);
        }
    
    }
    cout<<count<<endl;
    return 0;
}