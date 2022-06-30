class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                c++;
                if(i>0 and s[i-1]==' ')
                    break;
            }
        }
        return c;
    }
};