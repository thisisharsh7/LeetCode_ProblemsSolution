class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> m;
        int n=board.size();
        int s=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<s;j++){
                if(board[i][j]!='.'){
                    m[board[i][j]]++;
                }
                if(m[board[i][j]]>1){
                    cout<<m[board[i][j]]<<endl;
                    return false;
                }
            }
            m.clear();
            for(int j=0;j<s;j++){
                if(board[j][i]!='.'){
                    m[board[j][i]]++;
                }
                if(m[board[j][i]]>1){
                    return false;
                }
            }
            m.clear();
            if(i==0 or i==3 or i==6){
                for(int j=0;j<3;j++){
                if(board[i][j]!='.'){m[board[i][j]]++;}
                if(board[i+1][j]!='.'){m[board[i+1][j]]++;}
                if(board[i+2][j]!='.'){m[board[i+2][j]]++;}
                if(m[board[i][j]]>1 or m[board[i+1][j]]>1 or m[board[i+2][j]]>1){
                    return false;
                }
                }
                m.clear();
                for(int j=3;j<6;j++){
                if(board[i][j]!='.'){m[board[i][j]]++;}
                if(board[i+1][j]!='.'){m[board[i+1][j]]++;}
                if(board[i+2][j]!='.'){m[board[i+2][j]]++;}
                if(m[board[i][j]]>1 or m[board[i+1][j]]>1 or m[board[i+2][j]]>1){
                    return false;
                }
                }
                m.clear();
            
                    for(int j=6;j<9;j++){
                if(board[i][j]!='.'){m[board[i][j]]++;}
                if(board[i+1][j]!='.'){m[board[i+1][j]]++;}
                if(board[i+2][j]!='.'){m[board[i+2][j]]++;}
                        // cout<<m[board[i][j]]<<" "<<m[board[i+1][j]]<<" "<<m[board[i+2][j]]<<endl;
                if(m[board[i][j]]>1 or m[board[i+1][j]]>1 or m[board[i+2][j]]>1){
                    return false;
                }
                
            }
                m.clear();
            }
            
           
        }
        return true;
    }
};