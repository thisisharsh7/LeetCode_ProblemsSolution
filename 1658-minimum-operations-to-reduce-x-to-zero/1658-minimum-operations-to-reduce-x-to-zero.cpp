class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int tsum=0;
        for(int i=0;i<n;i++){
            tsum+=nums[i];
        }
        if(tsum<x){
            return -1;
        }
        int t=tsum-x;
        int l=0;
        int i=0;
        int len=-1;
        int csum=0;
        while(i<n){
            csum+=nums[i];
            i++;
            while(csum>t && l<=i){
                csum-=nums[l];
                l++;
            }
            if(csum==t){
                len=max(len,i-l);
            }
        }
        if(len==-1){
            return len;
        }else{
            return n-len;
        }
        
    }
};