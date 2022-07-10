class Solution {
public:
     int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long> dp(target+1, 0);   
        dp[0] = 1;
        for(int k=1;k<=target;++k){
            for (int j= 0;j<nums.size();++j){
                if( nums[j]<=k){
                    dp[k] += dp[k - nums[j]];}
            }
        }
        return dp[target];
    }
};