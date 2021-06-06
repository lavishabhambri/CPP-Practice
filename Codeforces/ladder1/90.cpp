#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int arr[100000], inc[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        inc[i] =arr[i];
    }

    int m;
    cin>>m;
    int type[100000], l[100001], r[100001];
    for(int i=0;i<m;i++){
        cin>>type[i]>>l[i]>>r[i];
    }

    sort(inc, inc+n);
    
    long long int arr_[100000], inc_[100000];
    arr_[0]=arr[0], inc_[0]=inc[0];

    for(int i=1;i<n;i++){
        arr_[i] = arr_[i-1] + arr[i];
        inc_[i] = inc_[i-1] + inc[i];
    }


    for(int i=0;i<m;i++){
        if(type[i]==1){
            cout<< arr_[r[i]-1]- arr_[l[i]-1] + arr[l[i]-1]<<endl;
        }else{
            cout<<inc_[r[i]-1] - inc_[l[i]-1] + inc[l[i]-1]<<endl;
        }
    }
    return 0;
}