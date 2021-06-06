#include<iostream>
#include<climits>
using namespace std; 

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int n;
        cin>>n;
        long int arr[100000];
        long int max=INT_MIN, min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(max < arr[i]){
                max=arr[i];
            }
            if(min > arr[i]){
                min=arr[i];
            }
        }

        cout<<2*(max-min)<<endl;
    }

    return 0;
}