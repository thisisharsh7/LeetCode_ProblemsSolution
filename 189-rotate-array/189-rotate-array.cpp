class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int r=0;
        int n=nums.size();
        // while(r<k){
        //     // int x=nums[nums.size()-1];
        //     // for(int i=nums.size()-2;i>=0;i--){
        //     //     nums[i+1]=nums[i];
        //     // }
        //     // nums[0]=x;
        //     r++;
        // }
        if(k>n){
            k=k%n;//as if size is 3 and k is 4 then first and fourth rotation will be same
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
        }else{
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
        }
    }
};