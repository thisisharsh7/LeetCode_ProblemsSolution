class Solution {
public:
    int maxArea(vector<int>& heights) {
        int rev=0;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            rev=max((min(heights[i],heights[j])*(j-i)),rev);
            if(heights[i]<heights[j]){
                i++;
            }else {
                j--;
            }
        }
        return rev;
    }
};
