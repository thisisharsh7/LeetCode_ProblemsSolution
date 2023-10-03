class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 1 ; i < n ; i++){
            if(nums[i-1]!=nums[i]){
                nums[j++] = nums[i-1];
            }
        }
        nums[j++] = nums[n-1];
        
        return j;
        
    }
};