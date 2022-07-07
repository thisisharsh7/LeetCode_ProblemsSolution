class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        int n=s.length();
        for(int i=0;i<n;i++){
            string rev = "";
            while(s[i]!=' ' and i<n){
                rev = s[i]+rev;
                i++;
            }
            if(i==n){
                ans = ans + rev;
            }
            else if(s[i]==' '){
                ans = ans + rev;
                ans = ans + ' ';
            }
        }
        return ans;
        
    }
};