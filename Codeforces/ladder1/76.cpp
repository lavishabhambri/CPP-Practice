#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[100], arr2[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    int v_min = max(2*arr1[0], arr1[n-1]);
    int v_max = arr2[0]-1;
    if(v_min>v_max){
        cout<<-1<<endl;
    }else{
        cout<<v_min<<endl;
    }
    
    return 0;
}