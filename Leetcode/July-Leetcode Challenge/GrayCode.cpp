#include<bits/stdc++.h>
using namespace std;

vector<int> grayCode(int n) {
    vector<int> result;
    if(n==1){
        result.push_back(0);
        result.push_back(1);
        return result;
    }

    vector<int> smallResult = grayCode(n-1);
    for(int i=0;i<smallResult.size();i++){
        result.push_back(smallResult[i]);
    }

    // Reverse the vector
    reverse(smallResult.begin(), smallResult.end());
    int numToBeAdded = pow(2, n-1);

    for(int i=0;i<smallResult.size();i++){
        result.push_back(smallResult[i] + numToBeAdded);
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int> result;
    result = grayCode(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}