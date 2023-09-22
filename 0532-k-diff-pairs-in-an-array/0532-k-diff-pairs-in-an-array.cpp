class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int diff = k;
        unordered_map<int,int> map1;
        int n = nums.size();
        int cnt =0;
        
        for(int i=0 ;i<n;i++){
            map1[nums[i]]++;
        }

        for(auto el : map1)
        {
            if(diff==0)
            { 
                if(el.second>1){
                    cnt++;
                }
                
            }
             else if(map1.find(el.first+diff)!=map1.end())
                cnt++;
        }
        
        return cnt;
    }
};