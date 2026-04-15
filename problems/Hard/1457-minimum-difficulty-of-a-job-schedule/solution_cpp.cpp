#include <vector>
#include <algorithm>
#include <climits>
#include <cstring> // Required for memset

class Solution {
public:
    int memo[301][11];

    int solve(int i, int d, std::vector<int>& jd) {
        int n = jd.size();

        // Base Case 1: If there are not enough jobs left for the remaining days, it's impossible.
        if (n - i < d) {
            return -1;
        }
        
        // Check memoization table before any computation
        if (memo[i][d] != -1) {
            return memo[i][d];
        }

        // Base Case 2: If only one day is left, the difficulty is the hardest
        // job among all remaining jobs (from index i to the end).
        if (d == 1) {
            int max_val = 0;
            for (int k = i; k < n; ++k) {
                max_val = std::max(max_val, jd[k]);
            }
            return memo[i][d] = max_val;
        }

        int ans = INT_MAX;
        int max_difficulty_today = 0;

        // Partition the array. 'k' is the last job for the current day.
        // We must leave at least 'd-1' jobs for the remaining 'd-1' days.
        for (int k = i; k <= n - d; ++k) {
            max_difficulty_today = std::max(max_difficulty_today, jd[k]);
            
            // Recursively solve for the rest of the jobs (from k+1) with d-1 days.
            int future_difficulty = solve(k + 1, d - 1, jd);

            // If the future schedule is possible, consider this partition.
            if (future_difficulty != -1) {
                ans = std::min(ans, max_difficulty_today + future_difficulty);
            }
        }

        // Store the result. If no valid partition was found, ans will be INT_MAX.
        return memo[i][d] = (ans == INT_MAX ? -1 : ans);
    }

    int minDifficulty(std::vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        
        // Initial check: if there are fewer jobs than days, it's impossible.
        if (n < d) {
            return -1;
        }

        // Initialize memoization table with -1 to indicate "not computed".
        memset(memo, -1, sizeof(memo));

        return solve(0, d, jobDifficulty);
    }
};