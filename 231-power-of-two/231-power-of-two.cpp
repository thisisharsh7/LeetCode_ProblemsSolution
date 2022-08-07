class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(__builtin_popcount(n)==1 && n!=-2147483648){
            
            return true;
        }
        
        return false;
    }
};