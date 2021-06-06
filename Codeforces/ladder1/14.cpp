#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxElement=INT_MIN, minElement=INT_MAX, maxIndex, minIndex;
    for(int i=0;i<n;i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
            maxIndex = i;
        }
        if(arr[i] <= minElement){
            minElement = arr[i];
            minIndex = i;
        }
    }

    if(maxIndex < minIndex){
        cout<<maxIndex + n - 1 - minIndex<<endl;
    }else{
        cout<<maxIndex + n - 2 - minIndex<<endl;
    }
    return 0;
}