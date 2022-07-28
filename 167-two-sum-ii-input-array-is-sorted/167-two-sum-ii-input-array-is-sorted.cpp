class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        vector<int> ans;
        while(i<j){
            int t=nums[i]+nums[j];
            if(t==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }else if(t>target){
                j--;
            }else{
                i++;
            }
        }
        return ans;
        
    }
};