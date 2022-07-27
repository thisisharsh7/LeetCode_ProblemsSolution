class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        vector<int> ans;
        if(is_sorted(nums.begin(),nums.end())){
            while(i<j){
            int c=nums[i]+nums[j];
            if(c==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }else if(c>target){
                j--;
            }else{
                i++;
            }
            
        }
        }else{
            unordered_map<int,int> m;
            for(int i=0;i<n;i++){
                int t=target-nums[i];
                if(m.find(t)!=m.end()){
                    ans.push_back(m[t]);
                    ans.push_back(i);
                }else{
                    m[nums[i]]=i;
                }
            }
            
        }
        return ans;
    }
};