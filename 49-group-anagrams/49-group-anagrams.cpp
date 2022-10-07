class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        map<vector<int>,vector<string>> m;
        
        for(auto word : strs)
        {
            vector<int> cnt(26);      
            for(auto ch : word){
                cnt[ch - 'a'] += 1;  
            } 
            m[cnt].push_back(word);
        }
        for(auto it : m){
            ans.push_back(it.second); 
        }
            
        return ans; 
    }
};