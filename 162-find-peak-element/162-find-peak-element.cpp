class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int x=1;
        if(nums.size()==2){
            int i=nums[x-1];
            int mid=nums[x];
            if(mid>i){
                return x;
            }else{
                return  0;
            }
        }
       while(x<=(nums.size()-1)){
            int mid=nums[x];
            int i=nums[x-1];
            if(mid>i){
                if(x!=(nums.size()-1)){
                    int j=nums[x+1];
                    if(mid>j){
                        return x;
                    }else{
                        x++;
                    }
                }else{
                    return x;
                }
            }else{
                x++;
            }
        }
        return 0;
    }
};