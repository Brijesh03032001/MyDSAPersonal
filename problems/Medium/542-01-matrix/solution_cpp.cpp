class Solution {
public:
  
    bool check(int i,int j, int m ,int n)
    {
      if(i<0 || j<0 || i>=m || j>=n)
      {
        return false;
      }
      return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      
      vector<vector<int>>ans(mat.size(), vector<int>(mat[0].size(),-1));
      int m= mat.size();
       int n= mat[0].size();
      
      queue<pair<int,int>>qu;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(mat[i][j]==0)
          {
            ans[i][j]=0;
            qu.push({i,j});
          }
        }
      }
      
      while(!qu.empty())
      {
        int r= qu.front().first;
        int c= qu.front().second;
        
        if(check(r+1,c,m,n) && ans[r+1][c]==-1)
        {
          qu.push({r+1,c});
          ans[r+1][c]=1+ ans[r][c];
        }
        if(check(r-1,c,m,n) && ans[r-1][c]==-1)
        {
          qu.push({r-1,c});
          ans[r-1][c]=1+ ans[r][c];
        }
        if(check(r,c-1,m,n) && ans[r][c-1]==-1)
        {
          qu.push({r,c-1});
          ans[r][c-1]=1+ ans[r][c];
        }
        if(check(r,c+1,m,n) && ans[r][c+1]==-1)
        {
          qu.push({r,c+1});
          ans[r][c+1]= 1+ ans[r][c];
        }
    
        
        qu.pop();
        
      }
      
      return ans;
    }
};