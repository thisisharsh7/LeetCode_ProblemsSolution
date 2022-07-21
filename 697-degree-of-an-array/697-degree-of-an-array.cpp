class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> vm;
        int rev=0,ans=1e9;
        for(int i=0;i<nums.size();i++)
        {
                vm[nums[i]].push_back(i);
                rev=max(rev,(int)vm[nums[i]].size());
        }
        for(auto it:vm)
        {
                if(it.second.size()==rev)
                {
                        ans=min(ans,it.second[rev-1]-it.second[0]+1);
                }
        }
            return ans;
    }
};