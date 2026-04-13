class Solution {
public:
    void dfs(vector<vector<int>> &dir, vector<vector<char>>& grid , int m, int n, int i, int j)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] != '1')
        {
            return;
        }
        grid[i][j] = '2';
        // explore all 4 directions
        int dir_le = dir.size();
        for(int t=0;t<dir_le;t++)
        {
            int new_i = dir[t][0] + i;
            int new_j = dir[t][1] + j;
            // dfs on new cell
            dfs(dir, grid, m, n, new_i, new_j);
        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> dir { {-1, 0},
                                   {1,0},
                                   {0,-1},
                                   {0,+1}};
        int m= grid.size();
        int n = grid[0].size();
        int c= 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(dir, grid, m,n,i,j);
                    c++;
                }
            }
        }
        return c;
    }
};