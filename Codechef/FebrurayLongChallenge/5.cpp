#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long int n;
        cin>>n;
        string arr[20000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int a=1;
        for(int i=0;i<n;i++){
            char c=arr[i][0];
            if(arr[i][0]!=c){
                a=0;
                break;
            }
        }

        if(a==1){
            cout<<0;
            return 0;
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){
                string s1=arr[i];
                string s2= arr[j];
                if(arr[i][0]!=arr[j][0]){
                    char c=s1[0];
                    s1[0]=s2[0];
                    s2[0]=c;
                    if()
                }
            }
        }

    }
}