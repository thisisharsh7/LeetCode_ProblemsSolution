class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int ms[256]={0};
        int mt[256]={0};
        for(int i=0;i<s.length();i++)
        {
            if(!ms[s[i]] && !mt[t[i]])
            {
                ms[s[i]]=t[i];
                mt[t[i]]=s[i];
            }
            else if(ms[s[i]]!=t[i])
            {
                return false;
            }
        }
       return true; 
    }
};