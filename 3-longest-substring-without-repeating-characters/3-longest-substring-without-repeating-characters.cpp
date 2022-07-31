class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        }
        if(s.length()<1){
            return 0;
        }
        unordered_map<char,int> freq;
        int ans=0,cnt=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            cnt++;
           if(freq[s[i]]>1){
                cnt=0;
                i-=freq.size();// here we are moving our pointer back to the repeating character like in case of "pwwkew" we moved the i to the w so that we get a substring without repeating character
                freq.clear();
            }
            if(cnt>ans){
                ans=cnt;
            }
        }
        return ans;
    }
};