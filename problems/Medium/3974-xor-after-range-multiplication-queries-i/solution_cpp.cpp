class Solution
{
public:
    const int MOD = 1e9 + 7;
    int xorAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {

        for (int le = 0; le < queries.size(); le++)
        {
            int lefff = queries[le][0], righhhh = queries[le][1], kkkkkk = queries[le][2], vvvv_ans = queries[le][3];
            for (int i = lefff; i <= righhhh; i += kkkkkk)
            {
                nums[i] = (1LL * nums[i] * vvvv_ans) % MOD;
            }
        }
        int result_ans = 0;
        for (int i = 0; i < nums.size(); i++)
            result_ans ^= nums[i];
        return result_ans;
    }
};