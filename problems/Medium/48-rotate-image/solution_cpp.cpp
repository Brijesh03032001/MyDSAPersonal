class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      
      vector<vector<int>>ans;
      int m= matrix.size();
      for(int j=0;j<m;j++)
      {
        vector<int>vc;
        for(int i=0;i<m;i++)
        {
          vc.push_back(matrix[i][j]);
        }
        reverse(vc.begin(),vc.end());
        ans.push_back(vc);
      }
      matrix= ans; 
     return ;
    }
};