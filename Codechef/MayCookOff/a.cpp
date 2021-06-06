#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1==y2) {
        cout<<0;
        return 0;
    }
    long long int X[1000][1000];
    X[0][0] = 1;

    for(int i=1;i<1000;i++){
        X[i][0] = i+1+ X[i-1][0];
        // cout<<X[0][i]<<" ";
    }
    for(int i=1;i<1000;i++){
        X[0][i] = i+ X[0][i-1];
        //cout<<X[0][i]<<" ";
    }

    for(int i=1;i<1000;i++){
        for(int j=1;j<1000;j++){
            X[i][j] = X[i][j-1] + j + i;
        }
        
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<X[i][j]<<" ";
        }
        cout<<endl;
    }
    long long int ans=0;
    x1 = x1-1, x2=x2-1, y1=y1-1, y2=y2-1;
    

    if(x1 != x2){
        for(int i=x1;i<=x2;i++){
            ans += X[i][y1];
            // cout<<X[i][y1]<<" ";
        }
        for(int i=y1+1;i<=y2;i++){
            ans += X[x2][i];
            //cout<<X[x2][i]<<" ";
        }
    }else{
        for(int i=y1;i<=y2;i++){
            ans += X[x2][i];
            //cout<<X[x2][i]<<" ";
        }
    }
    

    cout<<ans<<endl;

    return 0;
}