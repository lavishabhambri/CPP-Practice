class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //int n = sizeof(nums)/sizeof(nums[0]);
        int n=nums.size();
        int i, j;
        for(int i=0; i<n; i++){
            
            int left_sum=0;
            for(int j=0; j<i; j++)
                left_sum += nums[j];
            
            
            int right_sum = 0;
            for(int j=i+1; j<n; j++)
                right_sum += nums[j];
            
            
            if(left_sum == right_sum)
                return i;
        }
        
        return -1;
    }
};
