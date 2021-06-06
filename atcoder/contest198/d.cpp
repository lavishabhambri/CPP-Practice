#include <bits/stdc++.h>
#include<string>
using namespace std;


int cal_n(int n){
   int temp = 1;
   for (int i = 2; i <= n; i++)
      temp = temp * i;
   return temp;
}
//function to calculate ncr
int nCr(int n, int r){
   return cal_n(n) / (cal_n(r) * cal_n(n - r));
}

int main(){

    long long int s;
    cin>>s;
    long long int k = nCr(s-1, 5);

    cout<<k%998244353;
    
    return 0;
}