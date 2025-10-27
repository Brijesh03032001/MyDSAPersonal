class Solution {
public:
    int dp[301][5001];
    //int mo= 1000000007;
    int sq(vector<int>&ref, int n, int W)
    {
      if(dp[n][W]!=-1)
      {
        return dp[n][W];
      }
      
     if(W==0) return 1;
      if(n==0) return 0;
      
      if(ref[n-1]>W)
      {
        return dp[n][W]= sq(ref,n-1,W) ;
      }
      else if(ref[n-1]<=W)
      {
        return dp[n][W] = sq(ref,n,W-ref[n-1]) + sq(ref,n-1,W);
      }
      return dp[n][W];
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof dp);
        long long int ans= sq(coins, coins.size(), amount) ;
        if(ans!=INT_MAX-1)
        {
          return ans;
        }
      return 0;
    }
};