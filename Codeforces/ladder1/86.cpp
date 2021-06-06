#include<iostream>
#include <utility>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int p[50], t[50];
    pair<int, int>* arr = new pair<int, int>[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr, arr+n);
    k=k-1;
    int lcount=k, rcount=k;
    while(lcount>0 && arr[lcount].first==arr[lcount-1].first  && arr[lcount].second==arr[lcount-1].second){
        lcount--;
    }
        

    while(rcount<n-1 && arr[rcount].first==arr[rcount+1].first && arr[rcount].second==arr[rcount+1].second){
        rcount++;
    }
    cout<<rcount-lcount<<endl;
    return 0;
}