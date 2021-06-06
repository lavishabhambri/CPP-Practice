#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int s=0, e=n-1;
        for(int i=0;i<k;i++){
            if(arr[s]>=1){
                arr[s]--;
                arr[e]++;
            }else{
                s++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}