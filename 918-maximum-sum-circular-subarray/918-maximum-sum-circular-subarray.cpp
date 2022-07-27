class Solution {
public:
    int kadaneSum(vector<int> nums){
        int sum=INT_MIN;
        int csum=0;
        for(int i=0;i<nums.size();i++){
            csum+=nums[i];
            sum=max(csum,sum);
            if(csum<0){
                csum=0;
            }
        }
        return sum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum1=kadaneSum(nums);
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
            nums[i]=-nums[i];
        }
        sum2=sum2+kadaneSum(nums);
        if(sum2>sum1 && sum2!=0){
            return sum2;
        }
        return sum1;
    }
};