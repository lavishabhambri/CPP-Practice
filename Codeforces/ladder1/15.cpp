#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    double ans=0;
    for(int i=0;i<n;i++){
        ans += ((double) arr[i])/(n);

    }
    cout<<fixed << setprecision(12)<<ans<<endl;

    return 0;
}