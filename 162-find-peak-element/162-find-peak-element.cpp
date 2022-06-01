class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index=1;
        if(nums.size()==2){
            int prev=nums[index-1];
            int mid=nums[index];
            if(mid<prev){
                return 0;
            }else{
                return  index;
            }
        }
       while(index<=(nums.size()-1)){
            int mid=nums[index];
            int prev=nums[index-1];
            if(mid>prev){
                if(index!=(nums.size()-1)){
                    int next=nums[index+1];
                    if(mid>next){
                        return index;
                    }else{
                        index++;
                    }
                }else{
                    return index;
                }
            }else{
                index++;
            }
        }
        return 0;
    }
};