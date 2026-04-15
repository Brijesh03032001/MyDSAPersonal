class Solution {
public:
     int dp[100001][2][101];

    int solve(vector<int>& prices, int ind, int buy, int cap) {

        if(ind == prices.size() || cap == 0)
            return 0;

        if(dp[ind][buy][cap] != -1)
            return dp[ind][buy][cap];

        int profit;

        if(buy)
        {
            int buy_stock = -prices[ind] + solve(prices, ind+1, 0, cap);
            int skip = solve(prices, ind+1, 1, cap);

            profit = max(buy_stock, skip);
        }
        else
        {
            int sell_stock = prices[ind] + solve(prices, ind+1, 1, cap-1);
            int hold = solve(prices, ind+1, 0, cap);

            profit = max(sell_stock, hold);
        }

        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        return solve(prices, 0, 1, k);
    }
};