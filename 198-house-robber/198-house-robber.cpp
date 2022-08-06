class Solution {
public:
   
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int arr[101] = {0};
        arr[1]=nums[0];
        for(int i=2;i<=n;i++){
            arr[i]=max(arr[i-1],arr[i-2]+nums[i-1]);
        }
        return arr[n];
    }
};