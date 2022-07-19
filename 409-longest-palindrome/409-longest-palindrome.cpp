class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1){
            return 1;
        }
        unordered_map<char,int> um;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        int cnt=0;
        int x=0;
        for(auto it : um){
            if(it.second % 2!=0){
                x=1;
            }
            cnt+=(it.second / 2);
        
      }
      return (cnt*2) + x;
    }
};