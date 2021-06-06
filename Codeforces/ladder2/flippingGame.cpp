#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val;
    int maxZeros = -1, count_1=0, count_0=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val == 1){
            count_1++;
            if(count_0 > 0) count_0--;
        }else{
            count_0++;
            if(count_0 > maxZeros) maxZeros = count_0;
        }

    } 
    cout<<count_1 + maxZeros<<endl;
    return 0;
}