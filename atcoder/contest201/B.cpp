#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<pair<int, string>> p;
    for(int i=0;i<n;i++){
        int a;
        string s;
        cin>>s>>a;
        p.push_back(make_pair(a,s));
    }

    sort(p.begin(), p.end());
    pair<int, string> p2 = p[n-2];
    cout<<p2.second<<endl;
    return 0;
}