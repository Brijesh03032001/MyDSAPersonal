class Solution {
public:
    int dp[1001][1001];
    int lcs(string &a , string &b , int n ,int m)
    {
        if(m==0 || n==0)
        {
            return 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        
        if(a[n-1]==b[m-1])
        {
            return dp[n][m]= 1 + lcs(a,b,n-1,m-1);
        }
        else
        {
            return dp[n][m] = max(lcs(a,b,n,m-1), lcs(a,b,n-1,m));
        }
        
        
    }
    int longestCommonSubsequence(string text1, string text2) {
         
        int n= text1.length();
        int m= text2.length();
        memset(dp,-1,sizeof(dp));
        return lcs(text1,text2,n,m);
    }
};