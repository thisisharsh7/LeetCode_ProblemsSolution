class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        bool k=false;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if(nums[i]==target and nums[j]==target){
                k=true;
                break;
            }else if(nums[i]<target){
                i++;
            }else{
                j--;
            }
        }
        if(k){
            ans.push_back(i);
            ans.push_back(j);
        }else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};