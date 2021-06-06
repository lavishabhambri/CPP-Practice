#include<iostream>
#include<math.h>
using namespace std;

int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
}

int main(){
    int a,b,c;
    long long int sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                    sum += countDivisors(i*j*k);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}