class Solution {
public:
    string removeOccurrences(string s, string part) {
        int k=part.length();
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),k);
        }
        return s;
    }
    
};