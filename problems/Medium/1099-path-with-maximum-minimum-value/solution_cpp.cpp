class Solution {
public:
    bool isSafe(int i, int j, int m, int n)
    {
        if(i>=0 && i<m && j>=0 && j<n)
        {
            return true;
        }
        return false;
    }

    int maximumMinimumPath(vector<vector<int>>& grid) {
        priority_queue<pair<int, pair<int,int>>>pq;

        int m = grid.size();
        int n = grid[0].size();
        
       vector<vector<int>> best(m, vector<int>(n, INT_MIN));
        
        vector<pair<int,int>> dir {
            {-1,0}, {1,0}, {0,-1}, {0,1}
        };

        pq.push({grid[0][0], {0,0}});
        
        best[0][0] = grid[0][0];
        while(!pq.empty())
        {
            pair<int,pair<int,int>> curr = pq.top();

            int node_score = curr.first;
            int node_x = curr.second.first;
            int node_y = curr.second.second;
            pq.pop();

            for(int i=0;i< dir.size();i++)
            {
                 int new_x = node_x + dir[i].first;
                 int new_y = node_y + dir[i].second;

                 if(isSafe(new_x, new_y, m,n))
                 {
                     if(min(node_score, grid[new_x][new_y]) > best[new_x][new_y])
                     {
                           best[new_x][new_y] = min(node_score, grid[new_x][new_y]);
                           int te = min(node_score, grid[new_x][new_y]);

                           pq.push( {te, {new_x,new_y}});
                     }
                 }
            }
           


           

        }
 return best[m-1][n-1];
    }
};