class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        for(int i=0;i<row/2;i++){
            for(int j=i;j<row-i-1;j++){
                swap(matrix[i][j],matrix[row-1-j][i]);
                swap(matrix[row-1-j][i],matrix[row-1-i][row-1-j]);
                swap(matrix[row-1-i][row-1-j],matrix[j][row-1-i]);
            }
        }
    }
};