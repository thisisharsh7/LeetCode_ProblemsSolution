class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1){
            return true;
        }
        if(num == 2 or num == 3){
            return false;
        }
        int l= 1;
        int r = num/2;
        while(l<=r){
            long mid = (l+r)/2;
            long long p = mid*mid;
            if(p == num){
                return true;
            }else if(p<num){
                l = mid + 1;
            }else {
                r = mid - 1;
            }
        }
        return false;
    }
};