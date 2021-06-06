#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100000];
    long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%n !=0){
        cout<<n-1<<endl;
    }else{
        cout<<n<<endl;
    }
    return 0;
}