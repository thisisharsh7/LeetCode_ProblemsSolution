class Solution {
public:
    int fIA(vector<vector<int>>& grd, int r, int c) {
        if (r<0 || r>=grd.size() || c<0 || c>=grd[0].size()){
            return 0;
        }
        int A=0;
        if (grd[r][c] == 1) {
            grd[r][c]=0;
            A=1+fIA(grd,r+1,c) + fIA(grd,r-1,c)+ fIA(grd,r,c+1) + fIA(grd,r,c-1);
        }
        
        return A;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int n=grid.size();
        int m=grid[0].size();
        for (int i = 0; i <n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j]!=0) {
                    area=max(area, fIA(grid, i, j));
                }
            }
        }
        return area;
    }
};