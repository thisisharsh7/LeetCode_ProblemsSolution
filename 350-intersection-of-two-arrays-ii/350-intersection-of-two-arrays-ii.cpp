class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        if(is_sorted(nums1.begin(),nums1.end()) and is_sorted(nums2.begin(),nums2.end())){
            int i=0;
            int j=0;
            while(i<n1 and j<n2){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }else if(nums1[i]<nums2[j]){
                    i++;
                }else{
                    j++;
                }
            }
        }
        else{unordered_map<int,int> um;
        for(int i=0;i<n1;i++){
            um[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            if(um[nums2[i]]>0){
                um[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }}
        return ans;
    }
};