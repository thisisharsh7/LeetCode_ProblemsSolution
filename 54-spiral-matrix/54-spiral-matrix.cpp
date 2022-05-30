class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int startrow=0;
        int startcol=0;
        int endrow=matrix.size()-1;
        int endcol=matrix[0].size()-1;
        while(startrow<=endrow and startcol<=endcol){
            for(int i=startcol;i<=endcol;i++){
                ans.push_back(matrix[startrow][i]);
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;
            if(endrow>=startrow){
            for(int i=endcol;i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
            }
            endrow--;
            }
            if(endcol>=startcol){
            for(int i=endrow;i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
            }
            startcol++;
            }
        }
            return ans;
    }
};