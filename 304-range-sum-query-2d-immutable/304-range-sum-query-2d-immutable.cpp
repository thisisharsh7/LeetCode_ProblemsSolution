class NumMatrix {
public:
    vector<vector<int>> sum;
    int col;
    int row;
    NumMatrix(vector<vector<int>>& matrix) {
        row=matrix.size();
        col=matrix[0].size();
        sum = vector<vector<int>>(row + 1, vector<int>(col + 1));//computing size of row and col increasing by 1;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                sum[i][j]= matrix[i - 1][j - 1]+sum[i - 1][j]+sum[i][j - 1]-sum[i - 1][j - 1];
            }
        }
        
       
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0; 
        ans=sum[row2+1][col2+1] - sum[row2+1][col1] - sum[row1][col2+1] + sum[row1][col1 ];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
