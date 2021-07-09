#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    if(n==1){
        return 1;
    }
    int dp[n] = {0};
    dp[0] = 1;
    int overmax=0;
    for(int i=1;i<n;i++){
        int max = 0;
        for(int j=0;j<i;j++){
            if(nums[i] > nums[j]){
                if(max < dp[j]){
                    max = dp[j];
                }
            }
        }
        dp[i] = max + 1;
        if(dp[i] > overmax){
            overmax = dp[i];
        }
    } 
    
    return overmax;
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<lengthOfLIS(v);
}