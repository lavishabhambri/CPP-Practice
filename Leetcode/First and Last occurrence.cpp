#include<bits/stdc++.h>
using namespace std;

// USING BINARY SEARCH - FFFFF....TTTTT..

// Here search for first T i.e. arr[i] >= numToFind
int firstOccurrence(vector<int>arr, int numToFind){
    int len = arr.size();
    int low = 0;
    int high = len - 1;
    int mid;
    while(low < high){
        mid = low + (high - low)/2;  // helps to remove overflow
        if(arr[mid] >= numToFind){
            high = mid;
        }else{
            low = mid + 1;
        }
    }
    if(arr[low] != numToFind){
        // element is not present
        return -1;
    }
    return low;
}

// Here search for last F i.e. arr[i] < numToFind
int lastOccurrence(vector<int>arr, int numToFind){
    int len = arr.size();
    int low = 0;
    int high = len - 1;
    int mid;
    while(low < high){
        mid = low + (high - low + 1)/2;
        if(arr[mid] > k){
            high = mid -1;
        }else{
            low = mid;
        }
    }
    if(arr[low] != numToFind){
        return -1;
    }
    return low;
}

int main(){
    int n,queries;
    cin>>n>>queries;
    vector<int> arr[n];
    for(int i=0;i<n;i++){
        int a;
        cin>a;
        arr.push_back(a);
    }

    for(int i=0;i<queries;i++){
        int numToFind;
        cin>> numToFind;

        // First Occurrence
        cout<<firstOccurrence(arr, numToFind)<<" "<<lastOccurrence(arr, numToFind)<<endl;
    }

}
