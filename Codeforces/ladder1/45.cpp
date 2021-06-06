#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,  m, ele, max_ratio=INT_MIN, count=0;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ele;
        for(int j=0;j<n;j++){
            if(ele % arr[j]==0){
                int ratio = ele/arr[j];
                if(ratio == max_ratio){
                    count+=1;
                }else if(ratio > max_ratio){
                    max_ratio = ratio;
                    count=1;
                }
                break;
            }
            
        }
    }

    cout<<count<<endl;
    return 0;
}