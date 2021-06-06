#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            char a;
            cin>>a;
            if(a=='.'){
                arr[i][j]=0;
            }else{
                arr[i][j]=1;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum = arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(sum==0 || sum==1 || sum==4 || sum==3){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}