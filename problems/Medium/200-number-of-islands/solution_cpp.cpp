class Solution {
public:
    void dfs(vector<pair<int,int>>&pai , vector<vector<char>>&grid, int m , int n , int i , int j)
    {
             if(i<0 || j<0 || i>=m || j>=n || grid[i][j] != '1')
             {
                return ;
             }
             grid[i][j] = '2';   // visited bn gya hai
              int p = pai.size();
              for(int lp=0;lp<p;lp++)
              {
                int x_dir = pai[lp].first + i;
                int y_dir = pai[lp].second + j;
                dfs(pai,grid,m,n,x_dir, y_dir);
              }
        //       for(pair<int,int>noo : pai)
        // {
        //   int nx= noo.first + i;
        //     int ny= noo.second + j;
        //   dfs(pai,grid,m,n,nx,ny);
        // }

    }
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        vector<pair<int,int>>pa{{0,1}, {1,0} , {-1,0} , {0,-1}};
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == '1')
                {
                    
                      dfs(pa,grid,m,n,i,j);
                      c++;
                }
            }
        }
        return c;
    }
};