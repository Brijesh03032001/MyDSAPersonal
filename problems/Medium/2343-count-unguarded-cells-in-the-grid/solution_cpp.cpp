#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * @brief Marks cells in a single direction as guarded.
     * * This function recursively moves in one direction (e.g., "up")
     * and marks any 'N' (Neutral) cells it encounters as 'V' (Visited/Guarded).
     * It stops when it goes out of bounds, hits a 'W' (Wall), or hits a 'G' (Guard).
     * * A guard's sight is NOT blocked by a 'V' cell.
     * * @param direction The direction to travel ("up", "down", "left", "right").
     * @param i The current row.
     * @param j The current column.
     * @param grid The grid to modify.
     * @param m Total rows.
     * @param n Total columns.
     * @param dir A map to get (dr, dc) from the direction string.
     */
    void markGuarded(string direction, int i, int j, vector<vector<char>>& grid, int m, int n, unordered_map<string, pair<int, int>>& dir) {
        
        // Base Case: Stop if out of bounds, or if we hit a Wall or another Guard.
        // These are the only things that block a guard's sight.
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 'W' || grid[i][j] == 'G') {
            return;
        }

        // If the cell is 'N' (Neutral), it's an unguarded cell in the line of sight.
        // We mark it as 'V' (Visited/Guarded).
        if (grid[i][j] == 'N') {
            grid[i][j] = 'V'; // Mark as guarded. This is permanent.
        }

        // If the cell is 'V', we don't mark it, but the sight *continues* through it.
        
        // Get the next coordinates
        int new_i = i + dir[direction].first;
        int new_j = j + dir[direction].second;
            
        // Continue the path in the *same* direction,
        // as long as we haven't hit a wall or guard.
        markGuarded(direction, new_i, new_j, grid, m, n, dir);
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        // Map to store direction vectors
        unordered_map<string, pair<int, int>> dir;
        dir["up"] = {-1, 0};
        dir["down"] = {+1, 0};
        dir["left"] = {0, -1};
        dir["right"] = {0, +1};

        // Initialize the grid with 'N' (Neutral)
        // (Fixed bug: was vector<int>, now vector<char>)
        vector<vector<char>> arr(m, vector<char>(n, 'N'));

        // Place guards
        for (const auto& guard : guards) {
            arr[guard[0]][guard[1]] = 'G';
        }

        // Place walls
        for (const auto& wall : walls) {
            arr[wall[0]][wall[1]] = 'W';
        }

        // Iterate through the grid to find guards
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                
                // (Fixed bug: was = 'G', now == 'G')
                if (arr[i][j] == 'G') {
                    // This is a guard. Start a 'markGuarded' path in all 4 directions
                    // *from* this guard's position.
                    // The path starts on the *adjacent* cell.
                    markGuarded("up",    i - 1, j,     arr, m, n, dir);
                    markGuarded("down",  i + 1, j,     arr, m, n, dir);
                    markGuarded("left",  i,     j - 1, arr, m, n, dir);
                    markGuarded("right", i,     j + 1, arr, m, n, dir);
                }
            }
        }

        // Now that all guards have marked their territories,
        // count the remaining 'N' cells.
        int unguardedCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 'N') {
                    unguardedCount++;
                }
            }
        }

        return unguardedCount;
    }
};

