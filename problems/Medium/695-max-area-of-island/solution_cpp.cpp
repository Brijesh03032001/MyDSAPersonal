class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
       
        int maxIsland = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    maxIsland = max(maxIsland, dfs(grid, r, c));
                }
            }
        }

        return maxIsland;        
    }

private:
    int dfs(vector<vector<int>>& grid, int r, int c) {
        int rows = grid.size(), cols = grid[0].size();
        if (r < 0 || r >= rows || c < 0 || c >= cols ||  grid[r][c] != 1) {
            return 0;
        }

        grid[r][c] = 2;
        return 1 + dfs(grid, r + 1, c) + dfs(grid, r - 1, c)
                 + dfs(grid, r, c + 1) + dfs(grid, r, c - 1);
    }
};