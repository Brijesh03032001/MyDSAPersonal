class Solution {
public:
    
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        int n=rowIndex;
        vector<vector<int>>dp(n+1);
        for(int i=0;i<=n;i++)
        {
            dp[i].resize(i+1);
        }
        
        
        for(int i=0;i<=n;i++)
        {
            vector<int>tem;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                   dp[i][j]=1; 
                }
                else
                {
                    dp[i][j]= dp[i-1][j-1] +dp[i-1][j];
                    
                }
            }
        }
        return dp[n];
        
    }
};