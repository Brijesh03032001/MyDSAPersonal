class Solution {
public:
    int dp[38];
    int t(int n)
    {
        if(n<=1)
        {
            return n;
        }
        if(n==2)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]= t(n-1) + t(n-2) + t(n-3);
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return t(n);
        
    }
};