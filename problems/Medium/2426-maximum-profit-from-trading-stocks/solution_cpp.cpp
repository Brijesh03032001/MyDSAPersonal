class Solution {
public:
    int dp[1001][1001];
    int sol(vector<int>& arr, vector<int>& cost, int W, int i)
    {
        if(i == 0 ) return 0;
        if(W < 0) return 0;
        if(dp[i][W] != -1)
        {
            return dp[i][W];
        }
        if(arr[i-1] > W)
        {
             return dp[i][W] = sol(arr, cost, W, i-1);

        }
        else
        {
             int take = cost[i-1] + sol(arr, cost, W - arr[i-1] , i-1);
             int not_take = sol(arr, cost, W, i-1);
             int res = max(take, not_take);
             return dp[i][W] = res;
        }
        return 0;
    }
    int maximumProfit(vector<int>& present, vector<int>& future, int budget) {

        int n = present.size();
        vector<int>cost(n, -1);
        if(budget == 0)
        {
             int ref_su = 0;
             for(int i=0;i<n;i++)
             {
                if( present[i] == 0)
                {
                     ref_su += future[i];
                }
               return ref_su;

             }
         }
        for(int i=0;i<n;i++)
        {
            cost[i] = future[i] - present[i];

        }
        memset(dp, -1, sizeof(dp));
        return sol(present, cost, budget, n);
    }
};