// You are given a Mountain array A of N integers.

// An array A with size N is called mountain if following conditions hold:-

// If N ≥ 3.
// There exists some index i with 1 < i < N such that: A[1] < A[2] < ... < A[i−1] < A[i] > A[i+1] > .... > A[N]. Index i is called the peak of the array.
// Your task is to find the peak index of the given array.

#include<bits/stdc++.h>
using namespace std;

int findPeakIndex(vector<long long int>arr){
    int low = 0;
    int high = arr.size() - 1;
    int mid;

    // FF...TT..
    // finding first T i.e. arr[mid] > arr[mid+1] - this is true only for decreasing seq
    // It is false for increasing secquence
    while(low < high){
        mid = low + (high - low)/2;

        if(arr[mid] > arr[mid+1]){
            high = mid;
        }else{
            low = mid + 1; //here this is shifting, so use lower value of mid
        }
    }
    // It is given that peak is always present, so no need to check
    return low + 1;
}

int main(){
    int n;
    cin>>n;
    vector<long long int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<findPeakIndex(arr);
}
