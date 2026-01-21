class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>>qu;
        int m= matrix.size();
        int n= matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    qu.push({i,j});
                }
            }
        }
        while(!qu.empty())
        {
            pair<int,int>pr= qu.front();
            qu.pop();
                    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==pr.first || j==pr.second)
                {
                    matrix[i][j]=0;
                }
            }
        }
        }
        
    }
};