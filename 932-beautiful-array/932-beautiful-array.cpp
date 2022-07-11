class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> rev = {1};
        while(rev.size()<n)
        {
            vector<int> temp;
            for(int i : rev){
                if(i*2-1 <= n){
                    temp.push_back(i*2-1);
                }
            }
            for(int i:rev){
                if(i*2 <= n){
                    temp.push_back(i*2);
                }
            }    
            rev = temp;
        }
        return rev;
    }
};