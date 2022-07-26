class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
            // cout<<m[arr[i]]<<endl;
        }
        vector<int> cnt;
        for(auto it : m){
            // cout<<it.second<<endl;
            cnt.push_back(it.second);
        }
        sort(cnt.begin(),cnt.end());
        for(int i=1;i<cnt.size();i++){
            // cout<<cnt[i]<<endl;
            if(cnt[i-1]==cnt[i]){
                return false;
            }
        }
        return true;
    }
};