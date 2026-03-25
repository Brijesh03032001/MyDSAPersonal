class Solution {
public:
    int dfs(int node, vector<vector<int>>& adj, vector<int>& quiet, vector<int>& ans)
    {
        if (ans[node] != -1) return ans[node];
        
        int res = node;

        for (auto it : adj[node])
        {
            int candidate = dfs(it, adj, quiet, ans);
            if (quiet[candidate] < quiet[res]) {
                res = candidate;
            }
        }

        return ans[node] = res;
    }

    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        
        int n = quiet.size();
        vector<vector<int>> adj(n);

        // correct direction: poorer → richer
        for (int i = 0; i < richer.size(); i++)
        {
            adj[richer[i][1]].push_back(richer[i][0]);
        }

        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++)
        {
            dfs(i, adj, quiet, ans); // no val needed
        }

        return ans;
    }
};