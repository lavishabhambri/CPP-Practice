#include<bits/stdc++.h>
using namespace std;
void ans(int num){
    int weight, count1=0, count2=0;
    for(int i=1;i<=num;i++){
        cin>>weight;
        if(weight==1){
            count1++;
        }else{
            count2++;
        }
    }
    if(count1%2==0 && count2%2==0){
        cout<<"YES"<<endl;
    }else if(count2%2!=0 && count1%2==0 && count1>=2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int t,num;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>num;
        ans(num);
    }
}