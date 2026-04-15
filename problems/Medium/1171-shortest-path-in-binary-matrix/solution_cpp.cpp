class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if(grid[0][0] != 0) return -1;
        if(n == 1) return 1;

        queue<pair<int,int>> qu;
        qu.push({0,0});
        grid[0][0] = 1;

        vector<pair<int,int>> dir = {
            {0,1}, {0,-1}, {1,0}, {-1,0},
            {-1,1}, {-1,-1}, {1,-1}, {1,1}
        };

        int level = 1;

        while(!qu.empty())
        {
            int qsize = qu.size();

            for(int i = 0; i < qsize; i++)
            {
                auto [x, y] = qu.front();
                qu.pop();

                for(auto &d : dir)
                {
                    int nx = x + d.first;
                    int ny = y + d.second;

                    if(nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] == 0)
                    {
                        if(nx == n-1 && ny == n-1)
                            return level + 1;

                        grid[nx][ny] = 1; // mark visited
                        qu.push({nx, ny});
                    }
                }
            }

            level++;
        }

        return -1;
    }
};