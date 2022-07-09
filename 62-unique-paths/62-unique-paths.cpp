class Solution {
private:
    vector<vector<int>> v;
public:
    int sans(int n, int m){
        int ans = 0;
        if(n == 1 || m == 1) return 1;
        if(v[n][m]) return v[n][m];
        return v[n][m] = sans(n, m - 1) + sans(n - 1, m);
    }
    int uniquePaths(int m, int n) {
        v.resize(101, vector<int>(101, 0));
        int rev = sans(n, m);
        return rev;
    }
};