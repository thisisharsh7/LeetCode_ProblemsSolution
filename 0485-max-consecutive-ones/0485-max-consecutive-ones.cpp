class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mS = 0;
        int S = 0;
        for(int i = 0 ; i < n ; i++){
            S += nums[i];
            mS = max(S,mS);
            if(nums[i] == 0){
                S = 0;
            }
        }
        return mS;
    }
};