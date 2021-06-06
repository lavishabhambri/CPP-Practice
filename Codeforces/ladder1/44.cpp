#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string, int> M;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(M.find(s)==M.end()) {
            M[s]=1;
        }
        else {
            M[s]++;
        }
    }
    int max=INT_MIN;
    string maxString;
    for(auto i : M){
        if(i.second > max){
            maxString = i.first;
            max=i.second;
        }
    }
    cout<<maxString<<endl;
    return 0;
}