class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int check1=nums[i];
            int check2=nums[j];
            if(check1==target and check2==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }else if(check1<target){
                i++;
            }else if(check2>target){
                j--;
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
        }
};