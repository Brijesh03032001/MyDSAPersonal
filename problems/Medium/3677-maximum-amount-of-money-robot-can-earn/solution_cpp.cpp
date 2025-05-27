class Solution {
public:
    int dp[1001][1001][3]; // DP array to store results for each state.

    // Helper function to solve the problem using recursion with memoization.
    int solve(int m, int n, vector<vector<int>>& coins, int power, int i, int j) {
        // Boundary check: If out of bounds, return a very small value.
        if (i < 0 || j < 0 || i >= m || j >= n) {
            return INT_MIN;
        }

        // Base case: If at the bottom-right corner.
        if (i == m - 1 && j == n - 1) {
             if(power > 0 && coins[i][j] <0)
            {
                return 0;
            }
            return coins[i][j]; // Return the value of the last cell.
        }

        // If already computed, return the cached value.
        if (dp[i][j][power] != INT_MIN) {
            return dp[i][j][power];
        }

        // Current cell value.
        int co = coins[i][j];
        int take = INT_MIN; // Maximum value that can be taken from this point.

        // If the current cell value is positive or zero.
        if (co >= 0) {
            take = co + max(solve(m, n, coins, power, i + 1, j), 
                            solve(m, n, coins, power, i, j + 1));
        } 
        // If the current cell value is negative.
        else {
            int take2 = INT_MIN, notTake = INT_MIN;

            // Use power to ignore the negative value.
            if (power > 0) {
                notTake = max(solve(m, n, coins, power - 1, i + 1, j), 
                              solve(m, n, coins, power - 1, i, j + 1));
            }

            // Take the negative value and continue.
            take2 = co + max(solve(m, n, coins, power, i + 1, j), 
                             solve(m, n, coins, power, i, j + 1));

            // Compare the two options: using power or taking the negative value.
            int ans2 = max(notTake, take2);
            take = max(take, ans2);
        }

        // Store the result in the DP array and return it.
        return dp[i][j][power] = take;
    }

    // Main function to calculate the maximum amount.
    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();    // Number of rows.
        int n = coins[0].size(); // Number of columns.

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

        int power = 2; // Initialize power.
        return solve(m, n, coins, power, 0, 0);
    }
};
