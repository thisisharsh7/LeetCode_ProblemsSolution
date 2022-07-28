class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int k=0;
        while(i<=j){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
               
            }
            i++;
        }
        while(k<=j){
            
            nums[k]=0;
            k++;
        }
    }
};