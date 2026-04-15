class Solution {
public:
     vector<pair<int,int>> dir {
        {-1,0},
        {1,0},
        {0,-1},
        {0,1}
     };
     int sol(vector<vector<int>>& grid , int i, int j, int cou, int m , int n)
     {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] == -1 || (grid[i][j] == 2 && cou != 0))
        {
             return 0;
        }
        if(grid[i][j] == 2 && cou == 0)
        {
           return 1;
        }
        int te = grid[i][j];
        //backtracking dallo
        grid[i][j] = -1;
        int su = 0;

        // explore all four directions;
        for(int d=0;d<4;d++)
        {
            int n_r = i + dir[d].first;
            int n_c = j + dir[d].second;
            su += sol(grid,n_r, n_c, cou - 1 ,m,n);
        }
        // backtracking httao
         grid[i][j] = te;
        return su;

     }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int c = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 0)
                {
                    c++;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    return sol(grid, i, j, c+1, m, n);
                }
            }
        }
        return 0;
    }
};