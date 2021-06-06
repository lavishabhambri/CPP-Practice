#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        int j;
        for(j=0;j<i;j++){
            cout<<j<<" ";
        }
        for(int k=j;k>=0;k--){
            if(k==0){
                cout<<k;
            }else{
                cout<<k<<" ";
            }
            
        }
        cout<<endl;
    }
    int m=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"  ";
        }

        int j;
        for(j=0;j<m-i;j++){
            cout<<j<<" ";
        }

        for(int k=j;k>=0;k--){
            if(k==0){
                cout<<k;
            }else{
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}