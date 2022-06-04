class Solution {
public:
    void findCombinations(int idx,int target,vector<int> &ca,vector<int> &sans,vector<vector<int>> &ans){
        if(idx==ca.size()){
            if(target==0){
                ans.push_back(sans);
            }
            return;
        }
        if(ca[idx]<=target){
            sans.push_back(ca[idx]);
            findCombinations(idx,target-ca[idx],ca,sans,ans);
            sans.pop_back();
        }
        findCombinations(idx+1,target,ca,sans,ans);
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> rev;
        vector<int> sans;
        findCombinations(0,target,candidates,sans,rev);
        return rev;
    }
};