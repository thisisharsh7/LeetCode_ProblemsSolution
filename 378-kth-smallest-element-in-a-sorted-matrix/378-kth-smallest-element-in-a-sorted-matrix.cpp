class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> larr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                larr.push_back(matrix[i][j]);
            }
        }
        sort(larr.begin(),larr.end());
        return larr[k-1];
    }
};