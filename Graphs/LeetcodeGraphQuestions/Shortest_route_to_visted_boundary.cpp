using namespace std;
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
class Solution
{
public:
    //    int ans = INT_MAX;  only for DFS
    int bfs(vector<vector<char>> &maze, int s_x, int s_y, int r, int c, vector<pair<int, int>> &dir)
    {
        queue<pair<pair<int, int>, int>> qu;
        qu.push({{s_x, s_y}, 0});
        maze[s_x][s_y] = '+'; // Mark entrance as visited

        while (!qu.empty())
        {
            auto [cell, steps] = qu.front();
            qu.pop();
            int x = cell.first;
            int y = cell.second;

            // Check if it's a border cell and NOT the entrance
            if ((x == 0 || x == r - 1 || y == 0 || y == c - 1) && !(x == s_x && y == s_y))
            {
                return steps; // Return immediately on finding nearest exit
            }

            for (auto [dx, dy] : dir)
            {
                int new_x = x + dx;
                int new_y = y + dy;

                // Valid move
                if (new_x >= 0 && new_x < r && new_y >= 0 && new_y < c && maze[new_x][new_y] == '.')
                {
                    maze[new_x][new_y] = '+'; // Mark visited
                    qu.push({{new_x, new_y}, steps + 1});
                }
            }
        }

        return -1; // No path found
    }

    // void dfs(vector<vector<char>>& maze, int s_x, int s_y, int res, int r, int c, vector<pair<int, int>>& dir, int e_x, int e_y) {

    //     if (s_x < 0 || s_x >= r || s_y < 0 || s_y >= c || maze[s_x][s_y] != '.') return;

    //     if ((s_x == 0 || s_x == r - 1 || s_y == 0 || s_y == c - 1) && !(s_x == e_x && s_y == e_y)) {
    //         ans = min(ans, res);
    //         return;
    //     }

    //     maze[s_x][s_y] = '+';

    //     for (auto it : dir) {
    //         int x_m = it.first;
    //         int y_m = it.second;
    //         dfs(maze, s_x + x_m, s_y + y_m, res + 1, r, c, dir, e_x, e_y);
    //     }

    //     maze[s_x][s_y] = '.';
    // }

    int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
    {
        int r = maze.size();
        int c = maze[0].size();
        vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        // ans = INT_MAX;

        // dfs(maze, entrance[0], entrance[1], 0, r, c, dir, entrance[0], entrance[1]);
        int ans = bfs(maze, entrance[0], entrance[1], r, c, dir);
        // if(ans == INT_MAX)
        // {
        //     return -1;
        // }
        // else
        // {
        //     return ans;
        // }.  ... only for DFS
        return ans;
    }
};
