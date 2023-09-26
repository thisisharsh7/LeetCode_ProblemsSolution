class Solution {
public:
    string removeDuplicateLetters(string s) {
        int len = s.size();
        string res = "";
        unordered_map<char, int> um1;
        unordered_map<char, bool> um2;
        stack<int> S;
        
        for (auto c : s) {
            um1[c]++;
        }
        
        for (auto el:um1) um2[el.first] = false;
        
        for (int i=0; i<len; i++) {
            um1[s[i]]--;
            if (um2[s[i]] == true) continue;
            
            while (!S.empty() and s[i] < s[S.top()] and um1[s[S.top()]] > 0) {
                um2[s[S.top()]] = false;
                S.pop();
            }
            
            S.push(i);
            um2[s[i]] = true;
        }
        
        while (!S.empty()) {
            res = s[S.top()] + res;
            S.pop();
        }
        return res;
    }
};