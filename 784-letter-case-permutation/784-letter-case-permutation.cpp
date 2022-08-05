class Solution {
public:
    vector<string> letterCasePermutation(string str) {
        for (int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
        vector<string> ans;
        dfs(str, ans, 0, str.size());
        return ans;
    }
    void dfs(string S, vector<string> &rev, int i, int n) {
        if (i < n) {
            dfs(S, rev, i+1,n);
            if (isalpha(S[i])) {
                S[i] = toupper(S[i]);
                dfs(S, rev, i+1,n);
            }
        } else rev.push_back(S);
    }
};