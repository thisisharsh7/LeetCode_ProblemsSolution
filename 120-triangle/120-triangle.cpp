class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-2;i>=0;i--){//starts from second last row 
         for(int j=0;j<triangle[i].size();j++){//col traversal
             triangle[i][j]=triangle[i][j]+min(triangle[i+1][j],triangle[i+1][j+1]); //changing the triangle element by sum of atplace element to the down two elements
         }
        }
    
        return triangle[0][0];//taking top min sum from bottom rows and cols + including top
    }
};