class Solution {
public:
    int dp[1001][1001][3];
    int solve(int m, int n ,vector<vector<int>>& coins , int power ,int i, int j )
    {
        if(i<0 || j<0 || i>=m || j>=n )
        {
            return INT_MIN;
        }
        if(i== m-1 && j== n-1)
        {
            if(power > 0 && coins[i][j] <0)
            {
                return 0;
            }
            else
            {
                return coins[i][j];
            }
        }
           if(dp[i][j][power] != INT_MIN) return dp[i][j][power];
     
        // base case done upward, now main logic

        int co = coins[i][j];
        int take = INT_MIN;
        int not_take = INT_MIN;
        take = co + max(solve(m,n,coins,power,i+1,j),solve(m,n,coins,power,i,j+1));

        if(power > 0 && co<=0)
        {
                not_take = max(solve(m,n,coins,power-1,i+1,j),solve(m,n,coins,power-1,i,j+1));

        }
        return dp[i][j][power] = max(take, not_take);
        // if(co >= 0)
        // {
        //         take = co + max(solve(m,n,coins,power,i+1,j),solve(m,n,coins,power,i,j+1));

        // }
        // else
        // {
        //       int take2 = INT_MIN, notTake = INT_MIN;
        //       if(power>0)
        //       {
        //            notTake = max(solve(m,n,coins,power-1,i+1,j), solve(m,n,coins,power-1,i,j+1));

        //       }
        //       else
        //       { 
        //             take2 = co + max(solve(m,n,coins,power,i+1,j),solve(m,n,coins,power,i,j+1));
    
        //       }
              
        //       int ans2 = max(notTake, take2);
        //       take = max(ans2, take);

        // }
        // return dp[i][j][power] = take;
    }
    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();
        int n = coins[0].size();
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001; j++)
            {
                for(int k=0;k<3;k++)
               {
                dp[i][j][k] = INT_MIN;
               }
            }
        }
        int power = 2;
        return solve(m,n,coins,power,0,0);

    }
};