class Solution {
public:
    int getSum(int a, unsigned int b) {
        int sum=a;//if b==0 then we directly return sum as a
        
        while(b!=0)//when b is not zero
        {
            sum=a^b;//this is sum of a and b without carry
            b=(a & b)<<1;//calulating carry and changing b to carry
            a=sum; //changing a to sum and again do this operation until b reaches zero
        }
        
        return sum;   
    }
};