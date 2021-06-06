#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, count=0;

    cin>>n;
    int x[200];
    int y[200];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++){
        int upper=0, lower=0, left=0,right=0;
        for(int j=0;j<n;j++){
            if(y[i] == y[j]){
                if(x[i] < x[j]){
                    right=1;
                }
                if(x[i] > x[j]){
                    left=1;
                }
            }
            
            if(x[i]==x[j]){
                if(y[i] > y[j]){
                    lower=1;
                }
                if(y[i] < y[j]){
                    upper=1;
                }
            }
            
        }
        if(lower && upper && left && right){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}