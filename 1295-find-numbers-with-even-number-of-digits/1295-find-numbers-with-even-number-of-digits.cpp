class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        while(!nums.empty()){
            int k=nums.back();
            nums.pop_back();
            int dcnt=0;
            while(k>0){
                dcnt++;
                int n=k%10;
                k=k/10;
            }
            if(dcnt%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};