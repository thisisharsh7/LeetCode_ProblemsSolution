class Solution {
public:
    void printSubset(int i,vector<int> sans,vector<int> &nums,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(sans);
            return;
        }
        vector<int> temp=sans;
        temp.push_back(nums[i]);
        printSubset(i+1,temp,nums,ans);
        printSubset(i+1,sans,nums,ans);
        
     
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sans;
        printSubset(0,sans,nums,ans);
        return ans;
    }
};
