class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>prefixmn(n),suffixmx(n);
        prefixmn[0]=prices[0];
        for(int i=1;i<n;i++)
        {
            prefixmn[i]=min(prefixmn[i-1],prices[i]);
        }
        suffixmx[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffixmx[i]=max(suffixmx[i+1],prices[i]);
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans, suffixmx[i]-prefixmn[i]);
        }
        return ans;
    }
};
