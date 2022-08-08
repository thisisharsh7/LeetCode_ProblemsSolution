class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i=0;i<32;i++){
            uint32_t x = n&1;
            uint32_t p = x<<(31-i);
            ans = ans|p;
            n = n>>1;
            }
        return ans;
    }
};