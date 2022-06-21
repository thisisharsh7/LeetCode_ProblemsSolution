class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0]=1;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int find =sum%k;
            if(find<0){
                find+=k;
            }
            if(m.find(find)!=m.end()){
                ans+=m[find];
            }
            m[find]++;
        }
        return ans;
    }
};