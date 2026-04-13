class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++)
        {
            int u= times[i][0];
            int v = times[i][1];
            adj[u].push_back({v, times[i][2]});
        }

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        vector<int>resu(n+1, INT_MAX);
        resu[k]=0;
        while(!pq.empty())
        {
             pair<int,int> pa = pq.top();
             pq.pop();
             int di = pa.first;
             int nod = pa.second;
             for(auto &it : adj[nod])
             {
                   int neighbor = it.first;
                int weight = it.second;

                if(di + weight < resu[neighbor]) {
                    resu[neighbor] = di + weight;
                    pq.push({resu[neighbor], neighbor});
                }
             }

        }
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            if(resu[i] == INT_MAX) return -1;
            ans = max(ans, resu[i]);
        }

        return ans;

        
    }
};