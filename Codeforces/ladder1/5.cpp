#include<iostream>
#include<string.h>
using namespace std;

int distinct(int n){
    int arr[10]={0};
    while(n!=0){
        int digit=n%10;
        n=n/10;
        arr[digit]+=1;
    }

    for(int i=0;i<10;i++){
        if(arr[i]>1){
            return 0;
        }
    }
    return 1;
}

int main(){
  int n;
  cin>>n;
  n++;
  int a=distinct(n);
  while(a==0){
      n++;
      a=distinct(n);
  }
    cout<<n;
  return 0;
}