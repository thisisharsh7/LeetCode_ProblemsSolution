class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int zt=0;
        int cnt=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]!=0){
                p=p*nums[i];
            }else{
                cnt++;
                zt=1;
            }
        }
        for(int i=0;i<=nums.size()-1;i++){
            if(zt!=1){
                nums[i]=p/nums[i];
            }else{
                if(nums[i]!=0){
                    nums[i]=0;
                }else{
                    if(cnt>1){
                        nums[i]=0;
                    }else{
                        nums[i]=p;
                    }
                }
            }
            
        }
        return nums;
    }
};