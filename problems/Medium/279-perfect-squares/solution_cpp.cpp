class Solution {
public:
    int dp[101][10001];
    int solve(vector<int>&vc , int i , int W)
    {
        if(i<0) return INT_MAX;
        if(W<=0) return 0;
        if(dp[i][W] != -1)
        { 
            return dp[i][W];
        }
        if(vc[i] > W)
        {
            return dp[i][W] = solve(vc, i-1 , W);
        }
        else
        {
            int include = 1 + solve(vc, i, W-vc[i]);
            int exclude = solve(vc,i-1, W);
            return dp[i][W] = min(include, exclude);
        }
        return 0;
    }
    int numSquares(int n) {
        memset(dp, -1, sizeof(dp));
        int high = int(sqrt(n)) + 1;
        vector<int>vc;
        for(int i=1;i<=high;i++)
        {
              vc.push_back(i*i);
        }
        
        return solve(vc, high-1, n);


    }
};