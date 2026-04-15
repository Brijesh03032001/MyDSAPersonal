class Solution {
public:
    int dp[13][10001];
    int co(vector<int>&coins , int W , int n)
    {
      if(W==0) return 0;
      if(n==0) return INT_MAX-1;
      
      if(dp[n][W]!=-1) return dp[n][W];
      if(coins[n-1]>W)
      {
        return dp[n][W]= co(coins, W, n-1);
      }
      else if(coins[n-1]<=W)
      {
        return dp[n][W] = min(1+ co(coins, W-coins[n-1], n) , co(coins,W,n-1));
      }
      return dp[n][W];
    }
    int coinChange(vector<int>& coins, int amount) {
       memset(dp,-1,sizeof dp);
        int re= co(coins,amount,coins.size());
        if(re!=INT_MAX-1)
        {
          return re;
        }
        
      return -1;
    }
};