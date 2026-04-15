class Solution {
public:
    int dp[101];
int sol(vector<int> &nums, int i, int n)
{
    if (i >= n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int inc = nums[i] + sol(nums, i + 2, n);
    int exc = sol(nums, i + 1, n);

    return dp[i] = max(inc, exc);
}

int rob(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int le = nums.size();
    return sol(nums, 0, le);
}
};