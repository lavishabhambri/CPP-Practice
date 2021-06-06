#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n+1], arr2[m];;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int visit[100005]={0};

    int b[100005]={0};
    b[0]=1;
    for(int i=n;i>=1;i--){
        if(visit[arr[i]]==0){
            b[i]++;
            visit[arr[i]]=1;
        }
    }

    for(int i=n;i>=1;i--){
        b[i]+=b[i+1];
    }
    
    for(int i=0;i<m;i++){
        cout<<b[arr2[i]]<<endl;
    }

    return 0;
}