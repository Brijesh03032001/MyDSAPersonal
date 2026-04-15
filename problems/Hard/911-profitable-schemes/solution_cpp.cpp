class Solution {
public:
    static const int MOD = 1e9 + 7;
    int dp[101][101][101]; // dp[profit_clamped][people][le]
    
    int sol(int profit, int n, vector<int>& arr, vector<int>& group, int le)
    {
        // clamp profit for DP indexing: any profit <= 0 maps to 0
        int p = profit <= 0 ? 0 : profit;
        // if (p > 100) p = 100; // defensive: ensure within array bounds

        if (le < 0) {
            return profit <= 0 ? 1 : 0;
        }
        if (n < 0) return 0;
        if (n == 0) return profit <= 0 ? 1 : 0;

        if (dp[p][n][le] != -1) {
            return dp[p][n][le];
        }

        long long ans = 0;
        // if cannot take this crime, skip it
        if (group[le] > n) {
            ans = sol(profit, n, arr, group, le - 1);
        } else {
            // include (note: pass profit - arr[le], which may be <=0; sol will clamp)
            ans = sol(profit - arr[le], n - group[le], arr, group, le - 1);
            // exclude
            ans += sol(profit, n, arr, group, le - 1);
        }

        dp[p][n][le] = ans % MOD;
        return dp[p][n][le];
    }

    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int le = group.size() - 1;
        memset(dp, -1, sizeof(dp));
        return sol(minProfit, n, profit, group, le);
    }
};
