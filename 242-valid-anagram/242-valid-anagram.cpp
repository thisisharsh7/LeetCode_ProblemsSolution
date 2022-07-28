class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int,int> um;
        int n=s.length();
        if(s.length()>t.length() || t.length()>s.length()){
            return false;
        }
        for(int i=0;i<n;i++){
            um[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(um[t[i]]>=1){
                um[t[i]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};