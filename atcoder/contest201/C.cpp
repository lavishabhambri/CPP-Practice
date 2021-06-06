#include<bits/stdc++.h>
using namespace std;




int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main(){
    string s;
    cin>>s;
    int O=0, Q=0, X=0;
    for(int i=0;i<10;i++){
        if(s[i]=='o') O++;
        else if(s[i]=='?') Q++;
        else X++;
    }

    if(X==10 || O>4){
        cout<<0;
        return 0;
    }

    if(O==4){
        cout<<1;
        return 0;
    }

    
    if(O==3){
        cout<<24 * (nCr(O,1)/2 + nCr(Q,1));
        return 0;
    }
    if(O==2){
        cout<<24 * (nCr(O, 1)/3 + nCr(O, 2)/4 + nCr(Q,2) + nCr(Q,1)/2);
        return 0;
    }

    if(O==1){
        cout<<24 * (1+ nCr(Q, 3) + nCr(Q, 2)/2 + nCr(Q, 1)/6 + (nCr(Q, 1)/2 + nCr(Q,2))/2);
        return 0;
    }
    return 0;
}