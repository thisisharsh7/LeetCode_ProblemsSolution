class Solution {
public:
     void solve(int l,int r,vector<int> &nums,vector<vector<int>> &rev){
        if(r==l){
            rev.push_back(nums);
            return;
        }
        for(int i=l;i<=r;i++){
            swap(nums[i],nums[l]);
            solve(l+1,r,nums,rev);
            swap(nums[i],nums[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,nums.size()-1,nums,ans);
        return ans;
        
    }
};