class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> check;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                check.push_back(matrix[i][j]);
            }
        }
        sort(check.begin(),check.end());
        return check[k-1];
    }
};