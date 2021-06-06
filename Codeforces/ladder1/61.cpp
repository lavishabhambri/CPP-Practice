#include <bits/stdc++.h> 
using namespace std;

int main(){
    long long int n,max_def,max_num=0,i,min_total=0,max_total=0;
    cin>>n;
    
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    {
        if(n%2==0)
            max_num=(n/2*(n-1));
        else
            max_num=(n/2*n);
    }
    else
    {
        for(i=0; i<n; i++)
        {

            if(arr[i]==arr[0])
                min_total++;
            if(arr[i]==arr[n-1])
                max_total++;
        }
        max_num=min_total*max_total;

    }
    max_def=arr[n-1]-arr[0];
    cout<<max_def<<" "<<max_num<<endl;
    return 0;
}