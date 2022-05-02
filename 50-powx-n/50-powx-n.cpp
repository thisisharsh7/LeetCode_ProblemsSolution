class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        if(n == INT_MAX){
            return x;
        }
        else if(n == INT_MIN)
        {
            if(x == 1 || x == -1){
                return 1;
            }
            else{
                return 0;
            }
                
        }
        if(n < 0)
        {
            x = 1/x;
            n *= -1;
        }
        while(n!=0)
        {
            if(n>0){
                result*=x;
                n--;
            }else{
                result*=1/x;
                n++;
            }
        }
        return result;
    }
        
    
};