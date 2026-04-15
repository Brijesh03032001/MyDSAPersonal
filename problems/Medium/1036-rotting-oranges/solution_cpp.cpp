class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> qu;
        int r = grid.size();
        int c = grid[0].size();
        for(int i =0;i < r ; i++)
        {
            for(int j=0;j< c; j++)
            {
                if(grid[i][j] == 2)
                {
                    qu.push({i,j});
                }
            }
        }
        int sec =0;
        if(qu.empty())
        {
            for(int i=0;i<r;i++)
           {
            for(int j=0;j< c; j++)
             {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
             }
         }
         return 0;
        }
        vector<vector<int>> directions = {
    {-1, 0}, 
    {1, 0}, 
    {0, -1}, 
    {0, 1}
};
        while(!qu.empty())
        {
            int n = qu.size();
            for(int i=0;i< n ; i++)
            {
                pair<int,int> pr = qu.front();
                qu.pop();
                int o_r = pr.first;
                int o_c = pr.second;
                for(int i=0; i< 4; i++)
                {
                     int n_r = o_r + directions[i][0];
                     int n_c = o_c + directions[i][1];
                     if(n_r >=0 && n_r < r && n_c>=0 && n_c < c)
                     {
                        if(grid[n_r][n_c] == 1)
                        {
                            qu.push({n_r, n_c});
                            grid[n_r][n_c] = 2;
                        }
                     }
                }
            }
            
            sec += 1;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j< c; j++)
            {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        return sec-1;
    }
};