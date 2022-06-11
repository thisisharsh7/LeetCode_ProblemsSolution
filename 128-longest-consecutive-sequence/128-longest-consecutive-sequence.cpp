class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){//new way to write not in case of vector
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=1,mcnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==(1+nums[i-1])){
                cnt++;
            }else if(nums[i]!=nums[i-1]){//here it may be little confusing but here first above if condition will work and then this one thus it means that nums[i]!=1+nums[i-1] then we are coming to this condition
                cnt=1;}
            mcnt=max(cnt,mcnt);
        }
        return mcnt;
    }
};
