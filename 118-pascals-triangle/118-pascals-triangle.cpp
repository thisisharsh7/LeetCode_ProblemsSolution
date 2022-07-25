class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> sans(i,1);
            for(int j=2;j<i;j++){
                sans[j-1]=ans[i-2][j-2]+ans[i-2][j-1];
            }
            ans.push_back(sans);
        }
        return ans;
    }
};