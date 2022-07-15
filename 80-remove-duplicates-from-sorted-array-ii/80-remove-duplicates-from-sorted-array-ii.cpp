class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n=nums.size(),i=0,j,cnt,idx=0;
        
        if(n<=2){ 
            return n;}
        
        while(i<n){
            j = i,cnt = 0;
            while(j<n && nums[j]==nums[i] ){
                cnt++;
                if(cnt<=2){
                    nums[idx] = nums[j];
                    idx++;
                }
                j++;
            }
            
            i = j;
        }
        
        nums.resize(idx);
        return idx;
        
    }
};