#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[5][5], p[5], p_ans[5];
    int max=INT_MIN, sum, n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        p[i] = i;
    }

    do{
        sum= arr[p[0]][p[1]] + arr[p[1]][p[0]] + arr[p[2]][p[3]] + arr[p[3]][p[2]];

        sum += arr[p[1]][p[2]] + arr[p[2]][p[1]] + arr[p[3]][p[4]] + arr[p[4]][p[3]];

        sum += arr[p[2]][p[3]] + arr[p[3]][p[2]];

        sum += arr[p[3]][p[4]] + arr[p[4]][p[3]];

        if(sum > max){
            max = sum;
            for(int i=0;i<5;i++){
                p_ans[i] = p[i];
            }
        }
    }
    while(next_permutation(p, p+n));
    cout<<max<<endl;
    return 0;
}