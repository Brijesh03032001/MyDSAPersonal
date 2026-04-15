class Solution {
public:
    int dp[1001];
    int sol(int i, vector<int>& cost)
    {
        int n = cost.size();

        if(i >= n)
            return 0;

        if(dp[i] != -1)
        {
            return dp[i];
        }
        int one = cost[i] + sol(i+1, cost);
        int two = cost[i] + sol(i+2, cost);

        return dp[i] = min(one, two);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1 , sizeof(dp));
        return min(sol(0,cost), sol(1,cost));
    }
};