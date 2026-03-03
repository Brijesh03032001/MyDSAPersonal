class Solution {
public:
    void dfs(vector<vector<int>>& image, int i ,int j , int &ref, int &nc, int &n , int &m)
    {
        if(i<0 || j<0 || i>=n || j>=m || image[i][j]==nc)
        {
            return ;
        }
        if(image[i][j]==ref)
        {
            image[i][j]= nc;   
        
        dfs(image,i-1,j,ref,nc,n,m);
        dfs(image,i+1,j,ref,nc,n,m);
        dfs(image,i,j-1,ref,nc,n,m);
        dfs(image,i,j+1,ref,nc,n,m);
        }
        return ;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int ref= image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        
        dfs(image,sr,sc,ref, newColor,n,m);
        return image;
    }
};