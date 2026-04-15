class Solution {
public:
    bool isSubset(int w ,int n , vector<int>nums)
    {
      bool dp[n+1][w+1];
      for(int i=0;i<n+1;i++)
      {
        for(int j=0;j<w+1;j++)
        {
          if(j==0)
          {
            dp[i][j]=true;
          }
          if(i==0 && j!=0)
          {
            dp[i][j]=false;
          }
        }
      }
      
      for(int i=1;i<n+1;i++)
      {
        for(int j=1;j<w+1;j++)
        {
          if(nums[i-1]<=j)
          {
            dp[i][j] = dp[i-1][j] || dp[i-1][j- nums[i-1]];
          }
          else
          {
            dp[i][j]= dp[i-1][j];
          }
        }
      }
      return dp[n][w];
    }
 
    bool canPartition(vector<int>& nums) {
         long long int su=0;
      for(int i=0;i<nums.size();i++)
      {
        su+=nums[i];
        
      }
      int k=2;
      if(su%k!=0)
      {
        return false;
      }
      else
      {
        int ref= su/k;
        if(isSubset(ref,nums.size(),nums))
        {
          return true;
        }
        else
        {
          return false;
        }
      }
      
      return false;
    }
};