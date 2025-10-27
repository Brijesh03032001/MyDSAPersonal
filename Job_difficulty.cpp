#include <vector>
#include <algorithm> // Required for std::max_element
#include <climits>   // Required for INT_MAX
#include <cstring>   // Required for memset

class Solution
{
public:
    // memo[i][d] stores the result for the subproblem starting at index 'i' with 'd' days remaining.
    int memo[301][11];

    /**
     * @brief Recursively calculates the minimum difficulty.
     * @param i The starting index of the jobs for the current subproblem.
     * @param d The number of days remaining to schedule the jobs.
     * @param jd The vector of job difficulties.
     * @return The minimum possible total difficulty, or -1 if impossible.
     */
    int solve(int i, int d, std::vector<int> &jd)
    {
        int n = jd.size();

        // Check if we have already computed the result for this state (i, d).
        if (memo[i][d] != -1)
        {
            return memo[i][d];
        }

        // Base Case 1: If only one day is left, we must do all remaining jobs.
        // The difficulty for this day is the hardest job from index 'i' to the end.
        if (d == 1)
        {
            // jd.begin() + i points to the start of our sub-array.
            // jd.end() points to the end of the whole array.
            return *std::max_element(jd.begin() + i, jd.end());
        }

        int min_total_difficulty = INT_MAX;

        // Loop to decide the partition for the current day.
        // 'k' is the index of the last job scheduled for today.
        // This loop must stop at an index that leaves at least 'd-1' jobs
        // for the remaining 'd-1' days. That last possible index is n - d.
        for (int k = i; k <= n - d; ++k)
        {
            // Find the difficulty for today: the max of jobs from 'i' to 'k'.
            // The end iterator for max_element is exclusive, so we use k + 1.
            int max_difficulty_today = *std::max_element(jd.begin() + i, jd.begin() + k + 1);

            // Recursively call 'solve' for the rest of the jobs (starting from k + 1)
            // with one less day (d - 1).
            int future_difficulty = solve(k + 1, d - 1, jd);

            // If the future schedule is possible (i.e., not -1),
            // then this is a valid partition.
            if (future_difficulty != -1)
            {
                // Update our answer with the minimum total difficulty found so far.
                min_total_difficulty = std::min(min_total_difficulty, max_difficulty_today + future_difficulty);
            }
        }

        // Store the computed result in our memoization table before returning.
        // If no valid schedule was found, min_total_difficulty remains INT_MAX.
        // In that case, we store -1 to signify impossibility.
        return memo[i][d] = (min_total_difficulty == INT_MAX ? -1 : min_total_difficulty);
    }

    /**
     * @brief Entry point for the solution.
     * @param jobDifficulty A vector of integers representing job difficulties.
     * @param d The total number of days available for scheduling.
     * @return The minimum difficulty of a job schedule, or -1 if impossible.
     */
    int minDifficulty(std::vector<int> &jobDifficulty, int d)
    {
        int n = jobDifficulty.size();

        // If there are fewer jobs than days, it's impossible to schedule
        // at least one job per day.
        if (n < d)
        {
            return -1;
        }

        // Initialize the memoization table with -1 to indicate that no
        // subproblems have been solved yet.
        memset(memo, -1, sizeof(memo));

        // Start the recursive process from the beginning of the array (index 0)
        // with 'd' days available.
        return solve(0, d, jobDifficulty);
    }
};