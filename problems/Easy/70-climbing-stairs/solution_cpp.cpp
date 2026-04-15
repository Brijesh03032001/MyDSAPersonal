class Solution {
public:
    int dp[47];

    int sol(int n, int i)
    {
        if(i == n)
            return 1;

        if(i > n)
            return 0;

        if(dp[i] != -1)
            return dp[i];

        int one_step = sol(n, i+1);
        int two_step = sol(n, i+2);

        return dp[i] = one_step + two_step;
    }

    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return sol(n, 0);
    }
};