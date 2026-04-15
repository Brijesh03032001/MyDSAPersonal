class Solution {
public:
  bool dfs(int ind, vector<vector<int>>& adj, vector<int>&color, int cur)
  {
       color[ind]= cur;
       for(int v : adj[ind])
       {
        if(color[v] == color[ind])
        {
            return false;
        }
        if(color[v] == -1)
        {
            if(dfs(v,adj, color, 1-cur) == false)
            {
                return false;
            }
        }
       }
       return true;
       
  }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int>color(n, -1);
        int currCol = 0;
        for(int i=0;i<n;i++)
        {
            if(color[i] == -1)
            {
              if(dfs(i,graph, color , currCol) == false)
              {
                return false;
              }

            }
        }
        return true;
    }
};