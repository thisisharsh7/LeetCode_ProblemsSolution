class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        int i=0;
        
        while(i<n and s[i]==' '){//excluding the white spaces from begining
            i++;
        }
        
        while(i<n){//starting from the first character of the string
            string w;
            while(i<n and s[i]!=' '){//looping till the second white space in the string
                w+=s[i];
                i++;
            }
            reverse(w.begin(),w.end());
            ans+=w;//adding in our return string
    
            while(i<n and s[i]==' '){//excluding white spaces btw the given string
                i++;
            }
            if(i!=n){
                ans+=' ';//including white space after every w string
            }
        }
        
        reverse(ans.begin(),ans.end());//reverse the whole ans string
        
        return ans;
        }
};