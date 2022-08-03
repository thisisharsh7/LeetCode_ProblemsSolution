class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans(n,vector<int> (m));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        
        int tem=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                pair<int,int> curr=q.front();
                q.pop();
                int x=curr.first;
                int y=curr.second;
                ans[x][y]=tem;
                if(x>0 && mat[x-1][y]==1){
                    q.push({x-1,y});
                    mat[x-1][y]=0;
                }
                if(y>0 && mat[x][y-1]==1)
			{
				mat[x][y-1]=0;
				q.push({x,y-1});
			}
			if(x<n-1 && mat[x+1][y]==1)
			{
				mat[x+1][y]=0;
				q.push({x+1,y});
			}
			if(y<m-1 && mat[x][y+1]==1)
			{
				mat[x][y+1]=0;
				q.push({x,y+1});
			}
            }
            tem++;
        }
        return ans;
    }
};