#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void dfs(int index, vector<int>&vis, vector<vector<int>>&stones)
    {
        vis[index] = 1;
        int r = stones[index][0];
        int c = stones[index][1];
        for(int i=0;i<stones.size();i++)
        {
            if(vis[i] == -1  && (stones[i][0] == r || stones[i][1] == c))
            {
                 dfs(i, vis, stones);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
          int n = stones.size();
          int group =0;
          vector<int>vis(n,-1);
          for(int i=0;i<n;i++)
          {
               if(vis[i] == -1)
               {

                    
                    dfs(i, vis, stones);
                    group++;
               }
          }
          return n-group;
    }
};