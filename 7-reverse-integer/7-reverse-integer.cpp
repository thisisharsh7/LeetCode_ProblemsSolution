class Solution {
public:
    int reverse(int x) {
        int r=0;//reversed no. storing
        int l;//left no.
        while(x!=0){
            l=x%10;
            x/=10;
            if(r > INT_MAX/10 || r==INT_MAX && l>7){
                return 0;
            }if(r < INT_MIN/10 || r==INT_MIN && l<-8){
                return 0;
            }
            r=(r*10) + l;

            
        }
        
        return r;
    }
};