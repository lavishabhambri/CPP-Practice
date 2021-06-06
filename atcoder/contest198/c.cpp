#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    double r,x,y;
    cin>>r>>x>>y;

    double a = x*x + y*y;
    a = sqrt(a);
    if(a==r){
        cout<<1;
        return 0;
    }else if(a<=2*r){
        cout<<2;
        return 0;
    }
    double k=(double)r;
    cout<<ceil(a/k);
    return 0;
}