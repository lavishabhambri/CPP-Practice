#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        int thief = n-x + m-y;
        int police = n-a;
        if(m-b > police){
            police = m-b;
        }

        if(thief <= police){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;

    }


    return 0;
}