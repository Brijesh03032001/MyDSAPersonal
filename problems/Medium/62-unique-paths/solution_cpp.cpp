class Solution {
public:
    int dp[101][101];
    int MOD = 1e9 + 7;
    int solve(int m , int n , int i, int j)
    {
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return 0;
        }
       if(i==m-1 && j==n-1)
       {
        return 1;
       }
       if(dp[i][j] != -1) return dp[i][j];
       int ri = solve(m,n,i,j+1);
       int down = solve(m,n,i+1,j);
       return dp[i][j] = (ri+down);
    }
    int uniquePaths(int m, int n) {

        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                dp[i][j] = -1;
            }
        }


        return solve(m,n,0,0);

    }
};