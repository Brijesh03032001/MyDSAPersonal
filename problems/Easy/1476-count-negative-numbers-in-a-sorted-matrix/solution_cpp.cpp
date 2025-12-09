class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      
        int co=0;
        int le=grid.size();
        
        for(int i=le-1;i>=0 ;i--)
        {
            for(int j=grid[i].size()-1;j>=0;j--)
            {
                if(grid[i][j]>=0) 
                {
                    break;
                }
                else 
                {
                    co++;
                }
            }
        }
        return co;
    }
};