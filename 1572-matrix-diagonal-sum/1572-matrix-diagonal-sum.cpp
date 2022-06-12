class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ans+=mat[i][j];//principal diagonal sum
                }
                if((i+j)==(n-1)){
                    ans+=mat[i][j];//seconary diagonal sum
                }
            }
        }
        if(n%2!=0)
            return ans-mat[n/2][n/2];//removing center element of a matrix which added twice in case of odd size of matrix
        return ans;//no repeating center element in case of even size matrix
        
    }
};