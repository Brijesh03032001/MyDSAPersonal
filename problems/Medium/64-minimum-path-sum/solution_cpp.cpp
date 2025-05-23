class Solution {
public:
    int dp[201][201];
    int solve(int i , int j , int m, int n ,vector<vector<int>>& grid )
    {
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return INT_MAX;
        }
           if(dp[i][j] != INT_MAX){
              return dp[i][j];
        }
        if(i== m-1 && j==n-1) 
        {
            return grid[i][j];
        }
     
       
        int right = solve(i,j+1, m,n,grid);
        int bot = solve(i+1,j,m,n,grid);
        int an= grid[i][j] + min(right, bot);
        return dp[i][j] = an;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        for(int i=0;i<201;i++)
        {
            for(int j=0;j<201;j++)
            {
                dp[i][j] = INT_MAX;
            }
        }
        return solve(0,0,m,n,grid);
    }
};