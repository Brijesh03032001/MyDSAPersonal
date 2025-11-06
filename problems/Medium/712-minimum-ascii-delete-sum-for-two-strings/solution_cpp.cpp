class Solution {
public:
   
    int ans(string s, string p )
    {
      int le1= s.size();
      int le2= p.size();
      int dp[le1+1][le2+1];
      
      dp[0][0]= 0;
     
      for(int j=1;j<=le1;j++)
      {
        dp[j][0]= dp[j-1][0] + s[j-1];
      }
      for(int j=1;j<=le2;j++)
      {
        dp[0][j]= dp[0][j-1] + p[j-1];
      }
      
      for(int i=1;i<=le1;i++)
      {
         dp[i][0]=dp[i-1][0] + s[i-1];
        for(int j=1;j<=le2;j++)
        {
          if(s[i-1]==p[j-1])
          {
            dp[i][j]=dp[i-1][j-1];
          }
          else
          {
            dp[i][j]= min(dp[i-1][j] + s[i-1] , dp[i][j-1] + p[j-1]);
          }
        }
      }
      return dp[le1][le2];
    }
  
  
    int minimumDeleteSum(string s1, string s2) {
       
        return ans(s1,s2);
    }
};