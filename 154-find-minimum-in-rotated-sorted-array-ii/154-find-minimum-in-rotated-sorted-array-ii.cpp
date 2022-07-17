class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<e){
            int mid=(s+e)/2;
            if(nums[mid]==nums[s] and nums[mid]==nums[e]){
                s++;
                e--;
            }else if(nums[mid]>nums[e]){
                s=mid+1;
            }else{
                e=mid;
            }
          }
          return nums[e];
    }
};