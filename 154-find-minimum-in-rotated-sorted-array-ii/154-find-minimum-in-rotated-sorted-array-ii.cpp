class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int i= 0 , j=n-1;

        while(i<j){
        	int mid=(j+i)/2;
        	if(nums[mid]<nums[j]){
        		j=mid;
        	}else if(nums[mid]>nums[j]){
        		i=mid+1;
        	}else{
                j--;
            }
        }
        return nums[i];
    }
};