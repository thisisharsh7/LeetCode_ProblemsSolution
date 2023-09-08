class Solution {
public:
    vector<int> generateRows(int rows){
        long long int a = 1;
        vector<int> v;
        v.push_back(a);
        for(int i= 1 ;i<rows;i++){
            a = a*(rows - i);
            a = a/i;
            v.push_back(a);
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> vect;
        // for(int i=0 ;i<numRows;i++){
        //     vector<int> v(i+1,1);
        //     vect.push_back(v);
        // }
        // for(int i=2 ;i<numRows;i++){
        //     for(int j=1;j<vect[i].size()-1;j++){
        //         vect[i][j]=vect[i-1][j-1] + vect[i-1][j];
        //     }
        // }
        // return vect;

        vector<vector<int>> ans;
        for(int i=1 ;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
}; 