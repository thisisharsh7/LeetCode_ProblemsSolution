class Solution {
public:
     int lcs(string a,string b,int row,int col){
       vector<vector<int>> ans(row+1,vector<int>(col+1,0));
        
        for(int i=0;i<=row;i++){
            for(int j=0;j<=col;j++){
                if(i==0||j==0){
                    ans[i][j]=0;
                }
                else if(a[i-1]==b[j-1]){
                    ans[i][j]=1+ans[i-1][j-1];
                }else{
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        return ans[row][col];
    }
    int minDistance(string word1, string word2) {
        int n=word1.length(),m=word2.length();
        return n+m-(2*lcs(word1,word2,n,m));
    }
};