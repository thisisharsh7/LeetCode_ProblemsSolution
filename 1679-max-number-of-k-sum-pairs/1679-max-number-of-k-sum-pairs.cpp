class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int ans = 0;
        while(left < right){
            int n = nums[left] + nums[right];
            if(n == k){
                ans += 1;
                left += 1;
                right -= 1;
            }else if(n<k){
                left +=1;
            }else{
                right -=1;
            }
        }
        return ans;
    }
};