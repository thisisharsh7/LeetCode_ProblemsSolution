class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int i=0;i<nums1.size();i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(),nums.end());
        int x=nums.size()/2;
        if(nums.size()%2==0){
            double result=(double)(nums[x-1]+nums[x])/2;
            return result;
        }
        return nums[x];
    }
};