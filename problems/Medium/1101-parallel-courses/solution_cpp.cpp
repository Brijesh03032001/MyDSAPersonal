class Solution {
public:
    int Toposort(int n, vector<vector<int>>& relations)
    {
        vector<vector<int>> adj(n);
        vector<int> ind(n, 0); // Initialize with 0 explicitly just to be safe
        queue<int> qu;
        int le = relations.size();
        
        for(int i=0; i<le; i++)
        {
            int u = relations[i][0] - 1;
            int v = relations[i][1] - 1;
            adj[u].push_back(v);
            ind[v]++;
        }
        
        for(int i=0; i<n; i++)
        {
            if(ind[i] == 0)
            {
                qu.push(i);
            }
        }
        
        int lev = 0; // FIX 1: Start at 0
        int c = 0;
        
        while(!qu.empty())
        {
            lev++; // FIX 2: Increment at the START of processing a level
            int order = qu.size();
            for(int i=0; i<order; i++)
            {
                int nod = qu.front();
                qu.pop();
                c++;
                for(auto it : adj[nod])
                {
                    ind[it]--;
                    if(ind[it] == 0)
                    {
                        qu.push(it);
                    }
                }
            }
            // removed lev++ from here
        }
        
        if(c == n)
        {
            return lev;
        }
        return -1;
    }
    int minimumSemesters(int n, vector<vector<int>>& relations) {
        return Toposort( n, relations) ;
        
    }
};