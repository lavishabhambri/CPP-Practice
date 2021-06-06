#include<bits/stdc++.h>
using namespace std;

int main(){
    int press[3][3];
    int toggle[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>press[i][j];
            toggle[i][j]=press[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(press[i][j]!=0){
                if(j+1<=2){
                    toggle[i][j+1]  += press[i][j];
                }

                if(j-1>=0){
                    toggle[i][j-1]  += press[i][j];
                }

                if(i+1<=2){
                    toggle[i+1][j]  += press[i][j];
                }

                if(i-1>=0){
                    toggle[i-1][j]  += press[i][j];
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(toggle[i][j]%2==0){
                press[i][j]=1;
            }else{
                press[i][j]=0;
            }
            cout<<press[i][j];
        }
        cout<<endl;
    }
    return 0;
}