class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int front=0;
        for(int i=n-2;i>=0;i--){
            front=max(front,arr[i+1]);
            ans=max(ans,front-arr[i]);
        }
        return ans;
    }
};