class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        vector <int> v(n, 0);
        v[0] = 1, v[1] = 2;
        for(int i=2; i<n; i++){
            v[i]=v[i-2]+v[i-1];
        }
        return v[n-1];
    }
};