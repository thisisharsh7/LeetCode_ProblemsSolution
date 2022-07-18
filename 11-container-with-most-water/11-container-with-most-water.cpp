class Solution {
public:
    int maxArea(vector<int>& height) {
        int lt=0,rt=height.size()-1;
        int ans=0;
        while(lt<rt){
            int n=rt-lt;
            if(height[lt]<=height[rt]){
                ans=max(ans,n*height[lt]);
                lt++;
            }
            else{
                ans=max(ans,n*height[rt]);
                rt--;
            }
        }
        return ans;
    }
};