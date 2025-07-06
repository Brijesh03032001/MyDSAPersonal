#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void dfs(int curr, vector<vector<int>> &adj, vector<vector<int>> &ans, vector<int> &temp)
    {
        temp.push_back(curr);
        if (curr == adj.size() - 1)
        {
            ans.push_back(temp);
        }
        else
        {

            for (auto it : adj[curr])
            {

                dfs(it, adj, ans, temp);
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<vector<int>> ans;

        vector<int> temp;
        dfs(0, graph, ans, temp);
        return ans;
    }
};