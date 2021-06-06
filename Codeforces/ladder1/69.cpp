#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], sum_100=0, sum_200=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==100){
            sum_100++;
        }else{
            sum_200++;
        }
        
    }

    sum_200 = sum_200%2;
    sum_100 = sum_100 - 2*sum_200;
    if(sum_100%2==0 && sum_100>=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;

}