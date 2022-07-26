class Solution {
public:
    static bool compare(pair<int,int> p1,pair<int,int> p2){
        if(p1.second==p2.second){
            return p1.first<p2.first;
        }
        return p1.second<p2.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> ans;
        for(int i=0;i<arr.size();i++){
            int x=__builtin_popcount(arr[i]);
            ans.push_back(make_pair(arr[i],x));
        }
        sort(ans.begin(),ans.end(),compare);
        vector<int> rev;
        for(auto it : ans){
            rev.push_back(it.first);
        }
        
        return rev;
    }
};