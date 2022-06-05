class Solution {
public:
    void getSubset(int i,vector<int> sans,vector<int> &nums,set<vector<int>> &s){
        if(i==nums.size()){
            s.insert(sans);
            return;
        }
        vector<int> temp=sans;
        temp.push_back(nums[i]);
        getSubset(i+1,temp,nums,s);
        getSubset(i+1,sans,nums,s);
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> sans;
        getSubset(0,sans,nums,s);
        ans=vector<vector<int>> (s.begin(),s.end());
        return ans;
        
    }
};