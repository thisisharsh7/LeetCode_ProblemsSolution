class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int n = grid.size();
        int m = grid[0].size();
        deque<vector<int>> curRot;
        vector<vector<int>> dirs {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(grid[i][j] == 2) {
                    curRot.push_back(vector<int>{i, j});
                }
            }
        }
        
        int min = 0;
        while(!curRot.empty()) {
            int size = curRot.size();
            while(size > 0) {
                vector<int>& cur = curRot.front();
                for(auto& dir : dirs) {
                    int i = cur[0] + dir[0];
                    int j = cur[1] + dir[1];
                    if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) {
                        grid[i][j] = 2;
                        curRot.push_back(vector<int>{i, j});
                    }
                }
                curRot.pop_front();
                --size;
            }
            // If curRot has the orranges that will rot in next min;
            if(!curRot.empty()) ++min;
        }
        
        // Check any unrotten orrange left.
        for(const auto& row : grid){
            for(const auto& j : row) {
                if(j == 1) {
                    return -1;
                }
            }
        }
        
        return min;
    }
};