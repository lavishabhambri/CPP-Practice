#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long int f;
        cin>>n>>k>>f;
        pair<long long int, long long int> arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }

        sort(arr, arr+n);

        stack<pair<long long int, long long int>> s;
        s.push(arr[0]);
        for(int i=1;i<n;i++){
            pair<long long int,long long int>top = s.top();
            if(top.second >= arr[i].first){
                pair<long long int, long long int>put_val;
                put_val.first = top.first;
                put_val.second = max(top.second, arr[i].second);
                s.pop();
                s.push(put_val);
                
            }else{
                s.push(arr[i]);
            }
        }

        stack<pair<long long int,long long int>> store;
        while(s.size() !=0){
            store.push(s.top());
            s.pop();
        }

        while(store.size() !=0){
            pair<long long int, long long int> top = store.top();
            // cout<<top.first<<top.second<<" ";
            f = f - (top.second - top.first);
            store.pop();
        }

        if(f>=k){
            // cout<<f;
            cout<<"YES";
        }else{
            cout<<"NO";
        }

        cout<<endl;
      
    }

    return 0;
}