class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        unordered_map<int,int> m;
        if(n1<n2){
            for(int i=0;i<n1;i++){
                m[nums1[i]]++;
            }
            for(int i=0;i<n2;i++){
                if(m[nums2[i]]>=1){
                    ans.push_back(nums2[i]);
                    m[nums2[i]]--;
                }
            }
        }else{
            for(int i=0;i<n2;i++){
                m[nums2[i]]++;
            }
            for(int i=0;i<n1;i++){
                if(m[nums1[i]]>=1){
                    ans.push_back(nums1[i]);
                    m[nums1[i]]--;
                }
            }
        }
        return ans;
    }
};