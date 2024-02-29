class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int,int> um;
        
        for (int i = 0 ; i < n ; i++ ) {
            int mN = target - nums[i];
            if(um.find(mN) != um.end() ) {
                return { i , um[mN] };
            }
            um[nums[i]] = i ;
        }
        
//         for(int i = 0 ; i < n ; i++ ) {
            
//             for(int j = i + 1 ; j < n ; j++ ) {
                
//                 if(nums[i] + nums[j] == target ) {
//                     return { i , j };
//                 }
//             }
//         }
        
        return { -1 , -1 };
        
    }
};