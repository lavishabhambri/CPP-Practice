#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        for(int i=0;i<n;i++){
            char str[m];
            cin>>str;
            int pu=0, pp=0, pc=0;
            for(int i=0;i<m;i++){
                if(str[i]=='U'){
                    pu++;
                }else if(str[i]=='P'){
                    pp++;
                }else{
                    pc++;
                }
            }
            if(pc >=x || (pc>=x-1 && pp>=y)){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;

    }


    return 0;
}