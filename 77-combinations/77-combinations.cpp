class Solution {
public:
    void getCombination(int n,int k,int x,int ind,vector<int> &temp,vector<vector<int>> &ans){
        
        if(k==x){
            ans.push_back(temp);
        }
        
        else{
            for(int i=ind;i<=n;i++){
                temp.push_back(i);
                getCombination(n,k,x+1,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k){
        
        vector<int> temp;
        vector<vector<int>> ans;
        getCombination(n,k,0,1,temp,ans);
        return ans;
    }
};
