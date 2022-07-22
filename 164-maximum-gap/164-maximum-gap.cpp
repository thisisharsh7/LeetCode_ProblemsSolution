class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            ans=max(ans,nums[i]-nums[i-1]);
        }
        return ans; 
    }
};