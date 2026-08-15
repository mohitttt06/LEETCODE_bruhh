class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini = prices[0];

        int profit = 0;

        int ans;

        for(int i=1;i<prices.size();i++)
        {
            ans = prices[i]-mini;

            profit=max(profit,ans);

            mini=min(mini,prices[i]);

        }
        return profit;
    }
};
