class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int Nsum;
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int j=1;j<n-1;j++){
            int i=0;
            int k=n-1;
            while(i<j && j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<ans){
                    ans=abs(sum-target);
                    Nsum=sum;
                }else if(sum>target){
                    k--;
                }else{
                    i++;
                }
            }
        }
        return Nsum;
    }
};
