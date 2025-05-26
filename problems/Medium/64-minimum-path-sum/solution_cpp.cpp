class Solution {
public:
    int dp[201][201];
    int solve(int m, int n , int i ,int j , vector<vector<int>>& grid )
    {
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return INT_MAX;
        }
        if(dp[i][j] != INT_MAX) return dp[i][j];

        if(i== m-1 && j==n-1)
        {
            return grid[i][j];
        }
       int ans =  grid[i][j] + min(solve(m,n,i+1,j,grid) , solve(m,n,i,j+1,grid)); 
       return dp[i][j] = ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size();
      for(int i=0;i<201;i++)
      {
        for(int j=0;j<201;j++)
        {
            dp[i][j] = INT_MAX;
        }
      }
      return solve(m,n,0,0, grid);
    }
};