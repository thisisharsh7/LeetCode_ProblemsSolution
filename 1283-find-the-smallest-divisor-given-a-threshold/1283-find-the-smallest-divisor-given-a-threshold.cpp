class Solution {
public:
int divisorCheck(vector<int> v,int n,int k){
        int sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            sum += ceil(double(v[i])/double(k));
        }
        
        return sum;
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int mini = 1, maxi = INT_MIN;
        
        for(int i = 0 ; i < n ; i++ ){
            maxi = max(maxi,nums[i]);
        }
        
        while(mini <= maxi){
             int mid = (mini + maxi) / 2;
            if(divisorCheck(nums,n,mid) <= threshold){
                maxi = mid - 1;
            }else{
                mini = mid + 1;
            }
        }
        return mini;
    }
};