class Solution {
public:
    int minMoves(vector<int>& nums) {
        //for minMoves i am going to decrement array element at each operation
        sort(nums.begin(),nums.end());
        int dec=nums[0];
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            cnt+=nums[i]-dec;
        }
        return cnt;
    }
};