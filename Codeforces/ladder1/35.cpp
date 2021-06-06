#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<(sqrt((x*y)/z) + sqrt((x*z)/y) + sqrt((z*y)/x)) * 4;
    return 0;
}