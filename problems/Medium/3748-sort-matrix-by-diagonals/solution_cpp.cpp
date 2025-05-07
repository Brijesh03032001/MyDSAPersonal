class Solution {
public:
  vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        vector<vector<int>> copy = grid;
        int n = grid.size();
        // upward
        int k=0;
        while(k< n-1)
        {
            vector<int>sol;
            for(int i=0;i<n-1-k;i++)
            {
                sol.push_back(grid[i][i+k+1]);
            }
            sort(sol.begin(), sol.end());
            for(int i=0;i<n-1-k;i++)
            {
                copy[i][i+k+1] = sol[i];
            }
            k++;
        }
        // downward
        int k2=0;
        while(k2< n-1)
        {
            vector<int>sol;
            for(int i=0;i<n-1-k2;i++)
            {
                sol.push_back(grid[i+k2+1][i]);
            }
            sort(sol.rbegin(), sol.rend());
            for(int i=0;i<n-1-k2;i++)
            {
                copy[i+k2+1][i] = sol[i];
            }
            k2++;
        }
        //diagonal
        vector<int> solu ;
        for(int i=0; i < n; i++)
        {
            solu.push_back(grid[i][i]);
           
        }
        sort(solu.rbegin(), solu.rend());
    
        int l3=0;
        for(int i=0; i < n; i++)
        {
            copy[i][i] = solu[l3];
            l3++;
           
        }
        return copy;
    }
};