class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int> ans(n1);
        vector<int> nge(n2);
        stack<int> s;
        s.push(n2-1);
        nge[n2-1]=-1;
        for(int i=n2-2;i>=0;i--){
            while(!s.empty() and nums2[s.top()]<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                nge[i]=-1;
            }else{
                nge[i]=nums2[s.top()];
            }
            s.push(i);
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(nums2[i]==nums1[j]){
                    ans[j]=nge[i];
                }
            }
        }
        return ans;
        
    }
};