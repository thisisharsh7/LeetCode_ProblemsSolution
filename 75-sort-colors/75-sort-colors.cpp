class Solution {
public:
    void merge(vector<int> &nums,int left,int mid,int right){
        int i=left;
        int j=mid+1;
        int k=0;
        vector<int> b(right-left+1);
        while(i<=mid && j<=right){
            if(nums[i]<nums[j]){
                b[k++]=nums[i++];
            }else{
                b[k++]=nums[j++];
            }
        }
        while(i<=mid){
            b[k++]=nums[i++];
        }
        while(j<=right){
            b[k++]=nums[j++];
        }
        k=0;
        for(int i=left;i<=right;i++){
            nums[i]=b[k++];
        }
    }
    
    void mS(vector<int> &nums,int left,int right){
        if(left<right){
            int mid=(left+right)/2;
            mS(nums,left,mid);
            mS(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }
    
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        mS(nums,left,right);
    }
};