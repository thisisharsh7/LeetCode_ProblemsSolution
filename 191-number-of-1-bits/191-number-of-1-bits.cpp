class Solution {
public:
    int hammingWeight(uint32_t n) {
       // int cnt=0;
       //  while(n>0){
       //      n=n&(n-1);
       //      cnt++;
       //  }
       //  return cnt;
        // return __builtin_popcount(n);
        int ans=0;
        while(n>0){
            ans+=(n&1);
            n>>=1;
        }
        return ans;
    }
};