#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector <pair<int, int>> v;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(make_pair(val, i));
    }
    int j=0,k=0,last;
    while(n+j > k){
        if(v[k].first > m){
            v.push_back(make_pair(v[k].first - m, v[k].second));
            j++;
        }else{
            //remove the element as it goes to home
            last = v[k].second + 1;
        }
        k++;
    }

    cout<<last<<endl;


    return 0;
}