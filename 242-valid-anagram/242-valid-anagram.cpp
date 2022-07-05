class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> um;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(um[t[i]]>0){
                um[t[i]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};