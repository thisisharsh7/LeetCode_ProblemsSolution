class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int i;
        for(i=0;i<=n;i++){
            if(m[i]!=1){
                break;
            }
        }
        return i;
    }
};