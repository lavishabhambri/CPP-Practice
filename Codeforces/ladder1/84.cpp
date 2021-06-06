#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int lower[n], upper[n], lSum=0, rSum=0;
    for(int i=0;i<n;i++){
        cin>>lower[i]>>upper[i];
        if(lower[0]%2 + upper[0]%2==1 && n==1){
            cout<<-1<<endl;
            return 0;
        }else if(lower[i]%2 + upper[i]%2==1){
            a=1;
        }
        lSum +=lower[i];
        rSum +=upper[i];
        
    }
    if(lSum%2==0 && rSum%2==0){
        cout<<0<<endl;
        return 0;
    }else if(lSum%2==1 && rSum%2==1 && a==1){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}