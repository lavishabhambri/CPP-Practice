#include<iostream>
using namespace std;

int main(){
    int n, l_open=0, l_close=0, r_open=0, r_close=0;
    cin>>n;
    int l[10000], r[10000];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }

    for(int i=0;i<n;i++){
        if(l[i]==1){
            l_open++;
        }else{
            l_close++;
        }

        if(r[i]==1){
            r_open++;
        }else{
            r_close++;
        }
    }

    cout<<min(l_open, l_close) + min(r_open, r_close)<<endl;
    return 0;
}