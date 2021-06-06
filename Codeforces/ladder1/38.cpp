#include<iostream>
#include<climits>
using namespace std;

int main(){
    long int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min=INT_MAX, a=1,min2=0, minIndex;
    for(int i=0;i<n;i++){
        if(arr[i] == min){
            min2=min;
            a=0;
        }
        if(arr[i] < min){
            min=arr[i];
            minIndex=i;
        }
    }
    if(min2==min){
        cout<<"Still Rozdil"<<endl;
    }else{
        cout<<minIndex+1<<endl;
    }


    return 0;
}