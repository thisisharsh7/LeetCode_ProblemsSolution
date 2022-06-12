class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_map <int,int> m;
        int n=nums.size();
        int sum=0,msum=0;
        int j=0;
        for(int i=0;i<n;i++){
            int lval=nums[i];
            sum+=lval;
            m[lval]++;
            while(m[lval]>1){
                int rval=nums[j++];
                sum-=rval;
                m[rval]--;
            }
            if(sum>msum){
                msum=sum;
            }
        }
        return msum;
    }
};