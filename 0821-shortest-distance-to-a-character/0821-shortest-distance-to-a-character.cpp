class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector <int> ans;
        int min=s.length();
        for(int i = 0 ;i < s.length() ;i++){
 
            for(int j = i ; j<s.length() ;j++){
                if(s[j] == c){
                    if(abs(i-j)<=abs(i-min)){
                        min = j;
                       
                    }
                     break;
                    
                    
                }
            }
            ans.push_back(abs(min-i));
        }
        return ans;
    }
};