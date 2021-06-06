#include<iostream>
using namespace std;

int main(){
    long int n;
    cin>>n;

    while(n!=0){
        int last_1 = n%10, last_2=n%100, last_3=n%1000;
        if(last_1 == 1){
            n=n/10;
        }else if(last_2 == 14){
            n=n/100;
        }else if(last_3 == 144){
            n=n/1000;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}