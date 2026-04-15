class Solution {
public:
    int dp[101];
    int sol(int i, vector<int>&nums, int n)
    {
        if(i == 0) return nums[i];
        if(i < 0) return 0;
        if(dp[i] != -1)
        {
            return dp[i];
        }
        int considered = nums[i] + sol(i-2, nums, n);
        int not_considered = sol(i-1, nums, n);

        return dp[i] = max(considered, not_considered);
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));

        return sol(nums.size() - 1, nums, nums.size());    
    }

};