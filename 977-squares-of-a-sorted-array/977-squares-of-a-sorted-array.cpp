class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            nums[i]=nums[i]*nums[i];
            nums[j]=nums[j]*nums[j];
            i++;
            j--;
        }
        if(nums.size()%2!=0){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};