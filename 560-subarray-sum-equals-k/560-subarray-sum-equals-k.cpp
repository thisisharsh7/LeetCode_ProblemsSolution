class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        int n=nums.size();
        vector<int> preSum(n+1);
        
        for (int i=1;i<=n;i++) {
            preSum[i]=preSum[i-1]+nums[i-1];
            cnt[preSum[i]]++;
        }
        cnt[0]++;
        int ans=0;
        for (int i=n;i>=1;i--){
            cnt[preSum[i]]--;
            ans+=cnt[preSum[i]-k];
        }
        
        return ans;
    }
};