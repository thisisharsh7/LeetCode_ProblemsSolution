class Solution {
public:
    void findCombination(int idx,int target,vector<int> &ca,vector<int> &sans,vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(sans);
        }
        for(int i=idx;i<ca.size();i++){
            if(i>idx and ca[i]==ca[i-1]){
                continue;
            }if(ca[i]>target){
                break;
            }
            sans.push_back(ca[i]);
            findCombination(i+1,target-ca[i],ca,sans,ans);
            sans.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> sans;
        findCombination(0,target,candidates,sans,ans);
        return ans;
    }
};