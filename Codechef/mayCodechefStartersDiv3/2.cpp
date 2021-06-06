#include<bits/stdc++.h>
using namespace  std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin>>k;
        string arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }

        for(int i=0;i<k;i++){
            string s=arr[i];
            int b=1;

            for(int j=0;j<s.length();j++){
                int a=s[j], small;
                if(!((a>=97 && a<=109) || (a>=78 && a<=90))) {
                    b=0;
                    cout<<"NO"<<endl;
                    break;
                }

                if(j==0){
                    if(a>=97 && a<=109)  small = 1;
                    else small=0;
                }else{
                    if(a>=97 && a<=109){ //small
                        if(small == 0) {
                            b=0;
                            cout<<"NO"<<endl;
                            break;
                        }
                    }else{
                        if(small == 1){
                            b=0;
                            cout<<"NO"<<endl;
                            break;      
                        }
                    }
                }

            }
            if(b==0){
                break;
            }else{
                if(i==k-1){
                    cout<<"YES"<<endl;
                }
            }
        }
    }


    return 0;
}
