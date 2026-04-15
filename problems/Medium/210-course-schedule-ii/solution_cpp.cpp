class Solution {
public:
    vector<int> Toposort(vector<vector<int>>& prerequisites , int nodes)
    {
        vector<int> adj[nodes];
        int n = prerequisites.size();
        vector<int>indegree(nodes, 0);
        for(int i=0;i<n;i++)
        {
            int v = prerequisites[i][0];
            int u = prerequisites[i][1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        vector<int>res;
        queue<int> qu;
        for(int i=0;i<nodes;i++)
        {
            if(indegree[i] == 0)
            {
                 qu.push(i);
            }

        }
        while(!qu.empty())
        {
            int no = qu.front();
            res.push_back(no);
            qu.pop();
            for(auto it : adj[no])
            {
                indegree[it]--;
                if(indegree[it] == 0)
                {
                    qu.push(it);
                }
            }
        }

        int si = res.size();
        if(si == nodes)
        {
            return res;
        }
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        return Toposort(prerequisites, numCourses);
    }
};