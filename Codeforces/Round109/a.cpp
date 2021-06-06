#include<bits/stdc++.h>
using namespace std;

int reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);
 
    x = x / d;
    y = y / d;
 
   return y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<reduceFraction(k, 100)<<endl;
    }

}