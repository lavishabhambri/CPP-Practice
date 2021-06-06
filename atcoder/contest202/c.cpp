#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    long long int n;
    cin>>n;
    long long int a[n+1],b[n+1],c[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
         cin>>b[i];
    }
    for(int i=1;i<=n;i++){
         cin>>c[i];
    }

    long long int fa[100001]={0};

    for(int i=1;i<=n;i++){
        fa[a[i]]++;
    }

    // for(int i=1;i<=n;i++){
    //     cout<<fa[i]<<" ";
    // }

    long long int count=0;
    for(int i=1;i<=n;i++){
        int k = c[i];
        int ans = b[k];
        count += fa[ans];
    }
    cout<<count<<endl;

    return 0;
}