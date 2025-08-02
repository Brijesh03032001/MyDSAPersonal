class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      
    int r= matrix.size();
      int c= matrix[0].size();
      vector<vector<int>>ma(c,vector<int>(r,-1));
      for(int i=0;i<c;i++)
      {
        for(int j=0;j<r;j++)
        {
          ma[i][j]=matrix[j][i];
        }
      }
        
      return ma;
    }
};