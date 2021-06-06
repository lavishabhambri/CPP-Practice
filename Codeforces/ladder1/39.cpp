#include<iostream>
using namespace std;
long long arr[100];

void fib(){
    long long a=0, b=1, c;
    for(int i=0; i<=50; i++){
        c = a+b;
        a=b;
        b=c;
        arr[i]=a;
    }
}



int main(){
    fib();
    int n, sum,x,y,z;
    cin>>n;

    if(n<=2){
        if(n==0){
            cout<<"0 0 0"<<endl;
        }
        else if(n==1){
            cout<<"0 0 1"<<endl;
        }else{
            cout<<"0 1 1"<<endl;
        }
    }
    
    else{
        bool check=false;
        for(int i=0; arr[i]<n; i++){
            for(int j=i; arr[j]<n; j++){
                for(int k=j; arr[k]<n; k++){
                    sum = arr[i] + arr[j] + arr[k];
                    if(sum==n){
                        x = arr[i];
                        y = arr[j];
                        z = arr[k];
                        check=true;
                        break;
                    }
                    else if(sum>n){
                        check=false;
                        break;
                    }
                }
                if(check==true) break;
            }
            if(check==true) break;
        }
        if(sum!=n) cout<<"I'm too stupid to solve this problem"<<endl;
        else cout<<x<<" "<<y<<" "<<z<<endl;
    }




    return 0;
}