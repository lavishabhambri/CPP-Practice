#include<bits/stdc++.h>
using namespace std;

// long long int int;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum % n!=0){
            cout<<-1<<endl;

        }else{
            long long int avg = sum/n;
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i] > avg){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }

    return 0;
}