class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int rev=nums[0];
        int least=nums[0];
        int most=nums[0];
        for(int i=1;i<n;i++){
            int check=max(max(most*nums[i],least*nums[i]),nums[i]);
            least=min(nums[i],min(most*nums[i],least*nums[i]));
            most=check;
            rev=max(rev,most);
        }
        return rev;
    }
};