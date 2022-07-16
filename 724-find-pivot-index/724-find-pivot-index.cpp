class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        
        int lsum=0;
        int rsum=0;
        for(int i=1;i<n;i++){
            rsum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(lsum==rsum){
                return i;
            }
            
            if(i <n-1){
                lsum += nums[i];
                rsum -= nums[i+1];
            }
            
        }
        return -1;
    }
};