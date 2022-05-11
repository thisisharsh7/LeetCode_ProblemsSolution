class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int s=0;
            int e=matrix[i].size()-1;
            while(s<=e){
                int mid=(s+e)/2;
                if(target==matrix[i][mid]){
                    return true;
                }else if(target<matrix[i][mid]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
        }
        return false;
    }
};