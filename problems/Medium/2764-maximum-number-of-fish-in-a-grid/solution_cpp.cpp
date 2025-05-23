class Solution {
public:
    vector<pair<int,int>> pa { {0,1} , {0,-1} , {1,0} , {-1,0}};
    int solve(int i, int j, int r, int c, vector<vector<int>>& grid , vector<vector<bool>>& vis)
    {
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j] == 0 || vis[i][j] == true)
        {
            return 0;
        }
        int cu = grid[i][j];
        vis[i][j] = true;
        for(auto it : pa)
        {
            int f = it.first;
            int l = it.second;
            cu += solve(i+f, j+l , r, c , grid , vis);
        }
        return cu;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
           vector<vector<bool>> vis(r, vector<bool>(c, false));
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                vis[i][j] = false;
            }
        }
        int m = 0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j] != 0 && vis[i][j] == false)
                {
                       m = max(m, solve(i,j,r,c,grid,vis));
                }
            }
        }
        return m;

    }
};