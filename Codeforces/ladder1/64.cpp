#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t, sx, sy, ex, ey, time(-1);
    string dir;
    cin >> t >> sx >> sy >> ex >> ey >> dir;
    for(int i=0;i<t;i++){
        switch(dir[i]){
            case 'S':
                if(sy > ey){
                    sy--;
                }
                break;
            case 'N':
                if(sy < ey){
                    sy++;
                }
                break;
            case 'W':
                if(sx > ex){
                    sx--;
                }
                break;
            case 'E':
                if(sx < ex){
                    sx++;
                }
                break;
            default:
                break;
        }

        if(sx==ex && sy==ey){
            time = i+1;
            break;
        }

    }

    cout<<time<<endl;
    return 0;
}