class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string k =s;
    
        for(int i= 0 ;i<s.length();i++){
            k[indices[i]] = s[i];
        }
        return k;
    }
};