class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> nge(nums.size());
        int n=nums.size();
        vector<int> ans;
        stack<int> st;
        // st.push(0);
        // for(int i=1;i<n;i++){
        //   while(!st.empty() and nums[i]>nums[st.top()]){
        //       int pos=st.top();
        //       nge[pos]=nums[i];
        //       st.pop();
        //   }
        //     st.push(i);
        // }
        // while(!st.empty()){
        //     int pos=st.top();
        //     nge[pos]=-1;
        //     st.pop();
        // }
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
            int ep=i+k;
            while(ep>nge[j]){
                j=nge[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
       
        
    }
};