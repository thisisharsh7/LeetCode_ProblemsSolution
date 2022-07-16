class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int  cnt =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        while(cnt--){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0){
                nums[i]=nums[i+1];
                
                nums[i+1]=0;
            }
        }}
       
    }
};