class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int ms=INT_MIN;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(s>ms){
                ms=s;
            }
            if(s<0){
                s=0;
            }
        }
        return ms;
    }
};