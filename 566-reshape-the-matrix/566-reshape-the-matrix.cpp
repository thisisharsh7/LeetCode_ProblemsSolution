class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int ro=mat.size();
        int co=mat[0].size();
        if((ro==r and co==c) or (ro*co!=r*c)){
            return mat;
        }
        vector<int> sans(ro*co);
        int k=0;
        for(int i=0;i<ro;i++){
            for(int j=0;j<co;j++){
                sans[k]=mat[i][j];
                k++;
            }
        }
        k=0;
        vector<vector<int>> ans(r,vector<int>(c,0));
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    ans[i][j]=sans[k];
                    k++;
                }
            }
        return ans;
    }
};