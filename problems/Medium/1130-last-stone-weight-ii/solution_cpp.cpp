class Solution {
public:
  
     bool sub(vector<int>nums, int n, int W)
    {
      bool dp[n+1][W+1];
      
      for(int i=0;i<n+1;i++)
      {
        for(int j=0;j<W+1;j++)
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
        for(int j=1;j<W+1;j++)
        {
           if(nums[i-1]>j)
           {
             dp[i][j]= dp[i-1][j];
           }
          else if(nums[i-1]<=j)
          {
            dp[i][j]= (dp[i-1][j] || dp[i-1][j-nums[i-1]]);
          }
          
        }
      }
      return dp[n][W];
      
    }
    
	
   
    int lastStoneWeightII(vector<int>& stones) {
      
      vector<int>nums= stones;
      long long int su=0;
             if(nums.size()==1)
      {
        return nums[0];
      }
      for(int i=0;i<nums.size();i++)
      {
         su+=nums[i];
      }
      //cout<<su;
      long long int ref= su/2;
      //cout<<"***"<<ref;
      if(su%2==0)
      {
        long long int temp= ref;
        for(long long int i=ref;i>=0;i--)
        {
          //cout<<i<<"&&&";
          if(sub(nums,nums.size(),i))
          {
            return (temp-i)*2;
          }
        }
        
      }
      else
      {
        long long int temp= ref;
        for(long long int i=ref;i>=0;i--)
        {
          if(sub(nums,nums.size(),i))
          {
            return (temp-i)*2 +1;
          }
        }
      }
      return 1;
    }
};