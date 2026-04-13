class Solution {
public:
    void dfs(vector<bool>&visited,  vector<vector<int>>&adj, int node)
    {
        visited[node] = true;
        for(auto &it : adj[node])
        {
            if(!visited[it])
            {
                dfs(visited, adj, it);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N = isConnected.size();

        vector<vector<int>>adj(N);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    if(isConnected[i][j] == 1)
                    {
                        adj[i].push_back(j);
                    }
                }
            }
        }
        int c =0;
        vector<bool>visited(N, false);
        for(int i=0;i<N;i++)
        {
            if(!visited[i])
            {
     dfs( visited,adj,  i);
             c++;
        
            }
        
        }
        return c;
       
    }
};