class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,l=0,r=0;
        while(r<prices.size())
        {
            if(prices[r]-prices[l]<0)
            {
                l=r;
                r++;
            }
            else if(prices[r]-prices[l]>ans)
            {    ans=prices[r] - prices[l];
                r++;
            }
            else{
                r++;
            }
        }
        
        return ans;
    }
};