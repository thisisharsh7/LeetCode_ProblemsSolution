class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> ans(2,-1);
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] <= target){
                if(nums[mid]==target){
                    if(ans[1]<mid){
                        ans[1] = mid;
                    }
                }
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                if(nums[mid]==target){
                    if(ans[0]>mid || ans[0]==-1){
                        ans[0] = mid;
                    }
                }
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};