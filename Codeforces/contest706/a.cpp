#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;

    for(int m=0;m<t;m++){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;

        int a=1;
        
        int s=0, e=n-1;
        if(k==0){
            cout<<"YES"<<endl;
            a=0;
        }else{
            for(int i=0;i<k;i++){
                if(str[s]!=str[e] && s<e){
                    cout<<"NO"<<endl;
                    a=0;
                    break;
                }
                s++; 
                e--;
            }
        }

        if(a!=0){
            if(s>e){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
        
    }
    
    return 0;
}