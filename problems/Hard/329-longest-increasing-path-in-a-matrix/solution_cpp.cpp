class Solution {
public:
    int n,m,ans=0;
    int dfs(int x,int y,int val,vector<vector<int>>& matrix,vector<vector<int>>& t){
        if(x<0 or x>=n or y<0 or y>=m) return 0;
        if(matrix[x][y]<=val) return 0;
        if(t[x][y]!=-1) return t[x][y];
        int l=dfs(x,y-1,matrix[x][y],matrix,t);
        int r=dfs(x,y+1,matrix[x][y],matrix,t);
        int u=dfs(x-1,y,matrix[x][y],matrix,t);
        int d=dfs(x+1,y,matrix[x][y],matrix,t);
        return t[x][y]=1+max(l,max(r,max(u,d)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>t(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int len=dfs(i,j,-1,matrix,t);
                ans=max(ans,len);
            }
        }
        return ans;
    }
};