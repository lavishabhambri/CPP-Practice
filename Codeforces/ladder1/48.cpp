#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, sum=0, count=0;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }

    sort(arr, arr+12);
    for(int i=11;i>=0;i--){
        if(sum==k){
            cout<<count<<endl;
            return 0;
        }
        else if(sum<k){
            count++;
            sum += arr[i];
        }
    }
    if(sum < k && count==12){
        cout<<-1<<endl;
    }else{
        cout<<count<<endl;
    }
    
    return 0;
}