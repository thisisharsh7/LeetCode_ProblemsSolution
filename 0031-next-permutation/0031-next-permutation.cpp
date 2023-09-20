class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        next_permutation(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
};