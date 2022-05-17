class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v=nums;
        vector<int> ans;
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        while(i<j){
            int sum=v[i]+v[j];
            if(sum==target){
                break;
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        auto it=find(nums.begin(),nums.end(),v[i]);
        ans.push_back(it-nums.begin());
        nums[it-nums.begin()]=-1;
        it=find(nums.begin(),nums.end(),v[j]);
        ans.push_back(it-nums.begin());
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};