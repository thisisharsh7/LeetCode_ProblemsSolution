class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }else if(nums[mid]>target){
                j=mid-1;
                ans=mid;
            }else{
                i=mid+1;
                ans=mid+1;
            }
        }
        return ans;
    }
};