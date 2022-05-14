class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n==1){
            return true;
        }else if(n%2==1 or n%3==0){
            return false;
        }else if(n==0){
            return false;
        }
        return isPowerOfFour(n/4);
    }
};