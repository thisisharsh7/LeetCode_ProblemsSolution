class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                break;
            }
        }
        if(i<nums.size()){
            return i;
        }else{
            return -1;
        }
        
    }
};