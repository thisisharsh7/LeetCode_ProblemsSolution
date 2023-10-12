class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l_ind = 0;
        int r_ind = nums.size() - 1;
        while(l_ind <= r_ind){
            int mid = (l_ind + r_ind)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>target){
                r_ind--;
            }
            else if(nums[mid]<target){
                l_ind++;
            }
        }
        return -1;
    }
};