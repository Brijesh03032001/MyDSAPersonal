class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<int> &vis, int i, int n){
        vis[i]=1;
        for(int j=0; j<n; j++){
            if(isConnected[i][j]==1 && vis[j]==0){
                dfs(isConnected, vis, j, n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(isConnected, vis, i, n);
                cnt+=1;
            }
        }
        return cnt;
    }
};