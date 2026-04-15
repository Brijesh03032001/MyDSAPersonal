class Solution {
public:
     vector<pair<int,int>> dir {
        
        {1,0},
        
        {0,1}
     };
     int sol(vector<vector<int>>& grid , int i, int j, int m , int n, vector<vector<int>> &dp)
     {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] == 1)
        {
             return 0;
        }
        if(i == m-1 && j== n-1)
        {
           return dp[i][j] = 1;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int te = grid[i][j];
        //backtracking dallo
        grid[i][j] = 1;
        int su = 0;

        // explore all four directions;
        for(int d=0;d<2;d++)
        {
            int n_r = i + dir[d].first;
            int n_c = j + dir[d].second;
            su += sol(grid,n_r, n_c,m,n, dp);
        }
        // backtracking httao
        grid[i][j] = te;
        return dp[i][j] = su;

     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
        return sol(obstacleGrid, 0,0, m, n, dp);
    }
};