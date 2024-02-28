class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = INT_MIN;
        int cnt1 = 0;
        for ( int i = 0 ; i < nums.size() ; i++ ){
            if ( nums[i] ){
                cnt1++;
            }else {
                max1 = max( max1, cnt1 );
                cnt1 = 0;
            }
        }
        max1 = max ( max1, cnt1 );

        return max1;
    }
};