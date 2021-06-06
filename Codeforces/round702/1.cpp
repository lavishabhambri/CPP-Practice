#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[200];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maxi, mini, k, count=0;



        int index = 0;
        for(int i=1;i<n;i++){
            
            maxi = max(arr[i], arr[i-1]);
            mini = min(arr[i], arr[i-1]);


            while(maxi > 2* mini){

                count++;
                mini = 2*mini;
            }
            
        }
        
        cout<<count<<endl;
    }
}