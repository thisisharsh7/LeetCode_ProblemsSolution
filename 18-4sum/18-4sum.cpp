class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        set<vector<int>> uni;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
            int x=0;
            int z=n-1;
            while(i>x and j<z){
                
                if(target-nums[i]-nums[j]==nums[x]+nums[z]){
                    uni.insert(vector<int>{nums[x],nums[i],nums[j],nums[z]});
                    x++;
                    z--;
                }else if(target-nums[i]-nums[j]<nums[x]+nums[z]){
                    z--;
                }else{
                    x++;
                }
                
                
                
            }
            
            }
        }
        for(auto v:uni){
            ans.push_back(v);
        }
        return ans;
    }
};