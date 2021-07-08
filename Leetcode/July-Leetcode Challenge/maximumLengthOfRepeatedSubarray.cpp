#include<bits/stdc++.h>
using namespace std;

int findLength(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int dp[n1+1][n2+1];
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            dp[i][j] = 0;
        }
    }

    for(int i=n1-1;i>=0;i--){
        for(int j=n2-1;j>=0;j--){
            if(nums1[i] == nums2[j]){
                dp[i][j] = dp[i+1][j+1] + 1;
            }
        }
    }

    int maxLength = 0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(maxLength < dp[i][j]){
                maxLength = dp[i][j];
            }
        }
    }
    return maxLength;
}


int main(){
    vector<int> nums1, nums2;
    int n1,n2;
    cin>>n1>>n2;
    int a;
    for(int i=0;i<n1;i++){
        cin>>a;
        nums1.push_back(a);
    }

    for(int i=0;i<n2;i++){
        cin>>a;
        nums2.push_back(a);
    }

    cout<<findLength(nums1, nums2)<<endl;

}