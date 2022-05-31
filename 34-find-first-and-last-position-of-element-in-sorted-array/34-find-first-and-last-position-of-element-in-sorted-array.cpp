class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                ans.push_back(i);
                break;
                }
            }
        for(int i=n-1;i>=0;i--){
            if(target==nums[i]){
                ans.push_back(i);
                break;
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
        }
};