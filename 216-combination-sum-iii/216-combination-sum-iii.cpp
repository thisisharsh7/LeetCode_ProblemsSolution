class Solution {
public:
    void findCombinations(int idx,int target,int k,vector<int> &sans,vector<vector<int>> &ans){
        if(target==0 and sans.size()==k){
            ans.push_back(sans);
        }
        for(int i=idx;i<10;i++){
            if(i>target ){
                break;
            }

                sans.push_back(i);
            findCombinations(i+1,target-i,k,sans,ans);
            sans.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> rev;
        vector<int> sans;
        findCombinations(1,n,k,sans,rev);
        return rev;
    }
};
// class Solution {
// public:
//     vector<vector<int>> combinationSum3(int k, int n) 
//     {
//         vector<vector<int>>ans;
//         vector<int>comb;
//         findcomb(n, ans, comb, 1,k);
//         return ans;        
//     }
//     void findcomb(int target,   vector<vector<int>>&ans,vector<int>& combination,int begin,int need)
//     {
//         if (need< combination.size() or target<0)
//             return;
        
//         if (target==0 and combination.size()==need)
//         { 
//             ans.push_back(combination);
//             return ;
//         }        
//         for(int i=begin;i<=9;i++)
//         {
//             combination.push_back(i);
//             findcomb(target - i, ans, combination, i + 1, need );
//             combination.pop_back();
//         }
//     }
// };