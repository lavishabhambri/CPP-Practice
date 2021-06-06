#include<iostream>
using namespace std;

int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;  
    int d;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        d = y2-y1;
        x3 = x1 + d;
        y3 = y1;
        x4 = x2 + d;
        y4 = y3 + d;
    }else if(y1==y2){
        d = x2 - x1;
        x3 = x1;
        y3 = y1 + d;
        x4 = x3 + d;
        y4 = y2 + d;
    }else{
        if(abs(y1-y2) == abs(x2-x1)){
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;

        }else{
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}