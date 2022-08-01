class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int nC) {
        int m = img.size(), n = img[0].size();
        DFS(img, sr, sc, m, n, img[sr][sc], nC);
        return img;
    }
    
    void DFS(vector<vector<int>>& img, int r, int c, int m, int n, int t, int nC){
        if(r < 0 or c < 0 or r == m or c == n or img[r][c] == nC or img[r][c] != t){
            return;
        }
        img[r][c] = nC;
        DFS(img, r + 1, c, m, n, t, nC);
        DFS(img, r - 1, c, m, n, t, nC);
        DFS(img, r, c + 1, m, n, t, nC);
        DFS(img, r, c - 1, m, n, t, nC);
    }
};