#include<bits/stdc++.h>
using namespace std;

// long long int int;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i] = arr[i];
        }

        sort(arr2, arr2+n);
        int s=arr2[0], l=arr2[n-1];
        int posS, posL;
        for(int i=0;i<n;i++){
            if(arr[i]==s){
                posS = i;
            }
            if(arr[i] == l){
                posL = i;
            }
        }
        if(posL<n/2 && posS<n/2){
            cout<<max(posS, posL)+1;
        }else if(posL>=n/2 && posS>=n/2){
            cout<<max(n-posS, n-posL);
        }else if(posS < posL){
            cout<<min(min(posS + n - posL + 1, posL + 1), n-posS);
        }else{
            cout<<min(min(posL +n+1 - posS, n-posL ), posS + 1);
        }
        // int a = posL+1;
        // int b = n - posS;
        // int c = posS + n - posL + 1;
        // int d = posL + n - posS + 1;
        // if(posL > posS){
        //     cout<<min(a, c);
        // }else{
        //     cout<<min(b, d);
        // }
        cout<<endl;
        // if(posS<n/2){
        //     if(posL<n/2){
        //         cout<<posL+1<<endl;
        //     }else{
        //         cout<<posS + n - posL + 1<<endl;
        //     }
        // }else{
        //     if(posL>=n/2){
        //         cout<<n-posS<<endl;
        //     }else{
        //         cout<<posS + n - posL<<endl;
        //     }
        // }
        
    }

    return 0;
}