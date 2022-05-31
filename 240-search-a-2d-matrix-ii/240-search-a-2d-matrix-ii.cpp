class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nr=matrix.size();
        int nc=matrix[0].size();
        
        int c = nc-1;
        int r =0;
        while((r < nr && r >=0)  && (c < nc && c >= 0)){
            
            int check1 = matrix[r][c];
            
            if(check1 == target){
                return true;
            }
             else if(check1 < target){
                  r++;
            }else{
                 c--;
             }
        }
        return false;
    }
};