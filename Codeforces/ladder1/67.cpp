#include<iostream>
#include<string.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    // string ans[99999];
    int a;
    int count[8]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        count[a]++;
    }

    if(count[5]==0 && count[7]==0 && count[2]>=count[4] && count[1]==count[4]+count[6] && count[1]==count[2]+count[3]){
        
            for(int i=0;i<count[4];i++){
                cout<<"1 2 4"<<endl;
            }

            count[2] -= count[4];
            for(int i=0;i<count[2];i++){
                cout<<"1 2 6"<<endl;
            }

            for(int i=0;i<count[3];i++){
                cout<<"1 3 6"<<endl;
            }
        
    }else{
        cout<<-1<<endl;
        return 0;
    }

    return 0;

}