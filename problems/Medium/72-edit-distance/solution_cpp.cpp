class Solution {
public:
  
    int edit(string s1 , string s2)
    {
      int le1= s1.size();
      int le2= s2.size();
      int dp[le1+1][le2+1];
      
      dp[0][0]=0;
      for(int i=1;i<=le1;i++)
      {
        dp[i][0]=dp[i-1][0] +1;
        
      }
      
      for(int i=1;i<=le2;i++)
      {
        dp[0][i]= dp[0][i-1] + 1;
      }
      
      for(int i=1;i<=le1;i++)
      {
        for(int j=1;j<=le2;j++)
        {
          if(s1[i-1]==s2[j-1])
          {
            dp[i][j]= dp[i-1][j-1];
          }
          else
          {
            int a1= dp[i][j-1]; //insertion 
            int a2= dp[i-1][j];
            int a3= dp[i-1][j-1];
            int te= min(a1,a2);
            dp[i][j]= 1+ min(te,a3);
            
           }
        }
      }
      return dp[le1][le2];
    }
    int minDistance(string word1, string word2) {
     return edit(word1,word2);   
    }
};