class Solution {
private:
    void solve(int idx,vector<int>&v,vector<vector<int>>&ans){
       if(idx>=v.size()) {
           ans.push_back(v);
       }

        for(int i=idx;i<v.size();++i){
            swap(v[i],v[idx]);
            solve(idx+1,v,ans);
            swap(v[i],v[idx]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& v) {
     vector<vector<int>> ans;
        solve(0,v,ans);
        set<vector<int>> s(ans.begin(),ans.end());
        vector<vector<int>> rev(s.begin(),s.end());
        return rev;


    }
};