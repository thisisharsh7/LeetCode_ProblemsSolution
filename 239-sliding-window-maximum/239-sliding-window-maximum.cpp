class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> nge(nums.size());
        int n=nums.size();
        vector<int> ans;
        stack<int> st;
        st.push(n-1);
        nge[n-1]=n;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() and nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i]=n;
            }else{
                nge[i]=st.top();
            }
            st.push(i);
        }
        int j=0;
        for(int i=0;i<=n-k;i++){
            if(j<i){
                j=i;
            }
            while(i+k>nge[j]){
                j=nge[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
       
        
    }
};