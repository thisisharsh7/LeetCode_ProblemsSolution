class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=true;
        if(x<0){
            return false;
        }
        if(x>=0 and x<10){
            return true;
        }
        vector<int> v;
        int cnt=0;
        while(x>0){
            int r=x%10;
            x=x/10;
            v.push_back(r);
            cnt++;
        }
        for(int i=0;i<cnt/2;i++){
            if(v[i]!=v[cnt-i-1]){
                flag=false;
            }
        }
        return flag;
    }
};