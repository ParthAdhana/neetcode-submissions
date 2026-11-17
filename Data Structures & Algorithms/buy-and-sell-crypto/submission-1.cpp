class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int l=0;
       int r=1;
       int mx=0;
       while(r<prices.size())
       {
            if(prices[l]>prices[r])
            {
                l=r;
            }
            mx=max(mx,prices[r]-prices[l]);
            r++;
       }
        return mx;
    }
};
