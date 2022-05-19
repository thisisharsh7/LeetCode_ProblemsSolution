class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> rev;
        set<vector<int>> temp;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<n-1;i++){
            int j=0,k=n-1;
            
            while(j<i and k>i){
                int x=nums[j]+nums[i]+nums[k];
                if(x==0){
                    temp.insert(vector<int>{nums[j],nums[i],nums[k]}); 

                    j++;
                    k--;
                }else if(x<0){
                    j++;
                }else{
                    k--;
                }
        }
            
        }
        for(auto v:temp){
            rev.push_back(v);
        }
        return rev;
    }
};

