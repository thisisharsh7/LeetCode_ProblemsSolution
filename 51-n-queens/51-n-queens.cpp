class Solution {
    bool isSafe(int row,int col,vector<string> board,int n){
        int r=row;
        int c=col;
        while(col>=0 and row>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        col=c;
        row=r;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col=c;
        while(col>=0 and row<n){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
        
        
    }
public:
    void solve(int col, vector<string> &board, vector<vector<string>> &rev,int n){
        if(col==n){
            rev.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,rev,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> rev;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,rev,n);
        return rev;
    }
};