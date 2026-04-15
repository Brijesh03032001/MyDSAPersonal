class Solution {
public:
    void dfs(int i , int j,  vector<vector<bool>>&visited, vector<vector<int>>& heights, vector<pair<int,int>>&vc)
    {
        visited[i][j] = true;
        int n = heights.size();
        int m = heights[0].size();
        cout << n << m ;
        for(int k=0;k<4;k++)
        {
            int new_r = i + vc[k].first;
            int new_c = j+ vc[k].second;
            if(new_r >= 0 && new_r < n && new_c >= 0 && new_c < m && !visited[new_r][new_c] && heights[new_r][new_c] >= heights[i][j]){
                dfs(new_r, new_c, visited, heights, vc);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int m = heights.size();
        int n = heights[0].size();

        // made the visited array
        vector<vector<bool>>pacific_true(m, vector<bool>(n,false));
        vector<vector<bool>>atlantic_true(m, vector<bool>(n,false));
        
        //possible directions
        vector<pair<int,int>>vc;
        vc.push_back({-1,0});
        vc.push_back({1,0});
        vc.push_back({0,-1});
        vc.push_back({0,1});

        for(int i=0;i<m;i++)
        {
            dfs(i, 0, pacific_true, heights, vc);
            dfs(i, n-1 , atlantic_true, heights, vc);

        }

        for(int j=0;j<n;j++)
        {
            dfs(0, j, pacific_true, heights, vc);
            dfs(m-1, j, atlantic_true,heights , vc);
            
        }
        // ans 
        vector<vector<int>>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pacific_true[i][j] == true && atlantic_true[i][j] == true)
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
            }
        }

        return ans;
       

    }
};
