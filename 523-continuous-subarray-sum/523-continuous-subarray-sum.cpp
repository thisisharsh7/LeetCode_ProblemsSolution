#define ll long long int
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        ll sum=0;
        unordered_map<int,int> b;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum%=k;
            sum=(sum+k)%k;
            if(sum==0 && i>0){
                return true;
            }
            if(b.find(sum) != b.end())
            {
                if(i-b[sum] > 1) return true;
            }else{ 
                b[sum] = i;
                 }
        }
        return false;
    }
};