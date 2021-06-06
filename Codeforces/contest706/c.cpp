#include<iostream>
#include<math.h>
#include <iomanip> 
using namespace std;

long double squareRoot(int number, int precision) 
{ 
    int start = 0, end = number; 
    int mid; 
  
    // variable to store the answer 
    long double ans; 
  
    // for computing integral part 
    // of square root of number 
    while (start <= end) { 
        mid = (start + end) / 2; 
        if (mid * mid == number) { 
            ans = mid; 
            break; 
        } 
  
        // incrementing start if integral 
        // part lies on right side of the mid 
        if (mid * mid < number) { 
            start = mid + 1; 
            ans = mid; 
        } 
  
        // decrementing end if integral part 
        // lies on the left side of the mid 
        else { 
            end = mid - 1; 
        } 
    } 
  
    // For computing the fractional part 
    // of square root upto given precision 
    long double increment = 0.1; 
    for (int i = 0; i < precision; i++) { 
        while (ans * ans <= number) { 
            ans += increment; 
        } 
  
        // loop terminates when ans * ans > number 
        ans = ans - increment; 
        increment = increment / 10; 
    } 
    return ans; 
} 


int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int x1, x2, y1, y2;
        long double sum=0.0;
        for(int i=0;i<n;i++){
            cin>>x1>>y1>>x2>>y2;
            sum+= sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        }        
        cout<<setprecision(15)<<sum<<endl;
    }
    return 0;
}