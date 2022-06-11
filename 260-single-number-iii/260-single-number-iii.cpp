class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int cnt=0;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second==1 and cnt<2){
                ans.push_back(it->first);
                cnt++;
            }
        }
        return ans;
        
    }
};