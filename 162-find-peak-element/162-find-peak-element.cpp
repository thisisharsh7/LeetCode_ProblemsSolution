class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int check=1;
        int n=nums.size();
        if(n==2){
            int back=nums[check-1];
            int big=nums[check];
            if(big>back){
                return check;
            }else{
                return 0;
            }
        }
        while(check<=(n-1)){
            int mid=nums[check];
            int x=nums[check-1];
            if(mid>x){
                if(check!=n-1){
                    int y=nums[check+1];
                    if(mid>y){
                        return check;
                    }else{
                        check++;
                    }
                }else{
                    return check;
                }
            }else{
                check++;
            }
        }
        return 0;
    }
};