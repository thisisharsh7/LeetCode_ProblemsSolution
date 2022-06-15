class Solution {
public:
    
    static bool cmp(string a, string b){
        return a.size() < b.size();
    }

    int longestStrChain(vector<string>& words) {
        
        int n = words.size();
        
        sort(words.begin(), words.end(), cmp);
        
       unordered_map< string , int> m;
        for(string a : words)
        {
            for(int i=0;i<a.size();i++)
            {
                string s = a.substr(0 , i) + a.substr(i+1);
                
                if(m.find(s) == m.end())
                    m[a] = max(m[a] , 1);
                else
                    m[a] = max(m[a] , m[s] +1);
            }
           
        }
        int ans = 0;
        for(auto it=m.begin();it!=m.end();it++)
            ans = max ( ans , (*it).second);
        
       return ans; 
    }
};