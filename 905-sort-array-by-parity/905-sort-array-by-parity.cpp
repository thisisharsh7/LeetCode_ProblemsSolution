class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even = 0, odd = 0;
        int n=nums.size();
        while(even < n){
            if(nums[even] % 2 == 0){
                swap(nums[even], nums[odd]);//changing the place;
                odd++;
            }
            even++;
        }
        
        return nums;
    }
};