class Solution {
public:
    // int cntPath(int m,int n,int i,int j, vector<vector<int>> &dp){
    //     if(i==(n-1) && j==(m-1)) return 1;
    //     if(i>=n || j>=m) return 0;
    //     // else return cntPath(m,n,i,j+1) + cntPath(m,n,i+1,j);
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     else return dp[i][j] = cntPath(m,n,i+1,j,dp) + cntPath(m,n,i,j+1,dp);
    // }
    int uniquePaths(int m, int n) {
    //     vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    //     int k = cntPath(m,n,0,0,dp);
    //     if(m==1 && n==1){
    //         return 1;
    //     }
    //     return dp[0][0];
    int N = m+n-2;
    int r = m-1;
    double ans = 1;
    for(int i=1 ;i<=r ;i++){
        ans = ((ans*(N-r+i))/i);
    }
    return (int)ans;
    }
};