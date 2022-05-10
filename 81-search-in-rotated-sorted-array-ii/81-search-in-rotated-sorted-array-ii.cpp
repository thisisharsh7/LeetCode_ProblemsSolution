class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                break;
            }
        }
        if(i<nums.size()){
            return true;
        }else{
            return false;
        }
    }
};