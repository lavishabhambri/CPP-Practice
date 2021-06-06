#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        char game[3][3];
        int X_count=0, O_count=0, empty_count=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>game[i][j];
                if(game[i][j] == 'X'){
                    X_count++;
                }else if(game[i][j] == 'O'){
                    O_count++;
                }else{
                    empty_count++;
                }
            }
        }


        int wonCountX=0, wonCountO=0;
        if(game[0][0] == 'X' && game[0][1]=='X' && game[0][2]=='X') wonCountX=1;
        if(game[1][0] == 'X' && game[1][1]=='X' && game[1][2]=='X') wonCountX=1;
        if(game[2][0] == 'X' && game[2][1]=='X' && game[2][2]=='X') wonCountX=1;
        if(game[0][0] == 'X' && game[1][0]=='X' && game[2][0]=='X') wonCountX=1;
        if(game[0][1] == 'X' && game[1][1]=='X' && game[2][1]=='X') wonCountX=1;
        if(game[0][2] == 'X' && game[1][2]=='X' && game[2][2]=='X') wonCountX=1;
        if(game[0][0] == 'X' && game[1][1]=='X' && game[2][2]=='X') wonCountX=1;
        if(game[0][2] == 'X' && game[1][1]=='X' && game[2][0]=='X') wonCountX=1;
        
        if(game[0][0] == 'O' && game[0][1]=='O' && game[0][2]=='O') wonCountO=1;
        if(game[1][0] == 'O' && game[1][1]=='O' && game[1][2]=='O') wonCountO=1;
        if(game[2][0] == 'O' && game[2][1]=='O' && game[2][2]=='O') wonCountO=1;
        if(game[0][0] == 'O' && game[1][0]=='O' && game[2][0]=='O') wonCountO=1;
        if(game[0][1] == 'O' && game[1][1]=='O' && game[2][1]=='O') wonCountO=1;
        if(game[0][2] == 'O' && game[1][2]=='O' && game[2][2]=='O') wonCountO=1;
        if(game[0][0] == 'O' && game[1][1]=='O' && game[2][2]=='O') wonCountO=1;
        if(game[0][2] == 'O' && game[1][1]=='O' && game[2][0]=='O') wonCountO=1;
    
        if((wonCountX==1 && wonCountO==1) || (X_count-O_count<0) || (X_count-O_count>1)) cout<<3<<endl;
        else if(X_count==0 && O_count==0 && empty_count==9) cout<<2<<endl;
        else if(wonCountX==1 && wonCountO==0 && X_count>O_count) cout<<1<<endl;
        else if(wonCountX==0 && wonCountO==1 && X_count==O_count) cout<<1<<endl;
        else if(wonCountX == 0 && wonCountO==0 && empty_count==0) cout<<1<<endl;
        else if(wonCountX == 0 && wonCountO==0 && empty_count>0) cout<<2<<endl;
        else cout<<3<<endl;
    
    }
    return 0;
}