class Solution {
public:
    void mG(int lb,int mid,int ub,vector<int> &nums){
        int i=lb;
        int j=mid+1;
        int k=0;
        vector<int> b(ub-lb+1);
        while(i<=mid && j<=ub){
            if(nums[i]<=nums[j]){
                b[k]=nums[i];
                i++;
            }else{
                b[k]=nums[j];
                j++;
            }
            k++;
        }
       
        while(i<=mid){
            b[k]=nums[i];
            i++;
            k++;
        }
        while(j<=ub){
            b[k]=nums[j];
            j++;
            k++;
            }

        k = 0;
        
        for(int i = lb; i <= ub; i++)
        {
            nums[i] = b[k++];
        }
        
    }
    void mS(int lb,int ub,vector<int> &nums){
        if(lb<ub){
            int mid=(lb+ub)/2;
            mS(lb,mid,nums);
            mS(mid+1,ub,nums);
            mG(lb,mid,ub,nums);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        
        mS(0,nums.size()-1,nums);
        return nums;
    }
};
