class Solution {
public:
    vector<int> getRow(int rI) {
        vector<vector<int>> res;

		vector<int> ans(1,1);
		res.push_back(ans);
        
		if(rI == 0) {
			return  res[rI];
		}

		for(int i = 1; i <= rI; i++) {
			vector<int> ans(i + 1);
			ans[0] = 1; ans[i] = 1;
			for(int j = 1; j < i; j++) {
				ans[j] = res[i - 1][j - 1] + res[i - 1][j];
			}
			res.push_back(ans);
		}

		return res[rI];
    }
};