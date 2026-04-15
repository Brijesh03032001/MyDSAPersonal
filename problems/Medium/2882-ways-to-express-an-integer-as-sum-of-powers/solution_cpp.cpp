class Solution {
public:
    vector<vector<int>>dp;
    const int MOD = 1e9 + 7;
    int solve(int i, int W , vector<int>&vc)
    {
        if(W == 0) return 1;
        if(i<0 || W<0) return 0;
         if (dp[i][W] != -1) {
            return dp[i][W];
        }

        if(vc[i]> W)
        {
            return dp[i][W] = solve(i-1, W, vc);
        }
        else
        {
            int include = solve(i-1, W - vc[i], vc) % MOD;
            int exclude = solve(i-1, W, vc) % MOD;

            return dp[i][W] = (include + exclude)% MOD;
        }
        return 0;
    }

    int numberOfWays(int n, int x) {
        
        vector<int>vc;
        int i = 1;

        while(int(pow(i,x)) <= n)
        {
            vc.push_back(int(pow(i,x)));
            i++;
        }
        dp.assign(vc.size(), vector<int>(n + 1, -1));
        return solve(vc.size()-1, n, vc);
    }
};