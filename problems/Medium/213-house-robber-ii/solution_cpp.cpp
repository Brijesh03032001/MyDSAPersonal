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
        memset(dp, -1 , sizeof(dp));
        
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> temp1(nums.begin()+1 , nums.end());
        vector<int>temp2(nums.begin(), nums.end()-1);

        int ans1 = sol(temp1.size()-1 , temp1,  n);
       memset(dp, -1 , sizeof(dp));
        int ans2 = sol(temp2.size()-1, temp2, n);
      
      return max(ans1, ans2);

        
    }
};