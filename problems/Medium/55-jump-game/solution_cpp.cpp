class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return poss(nums,0,dp , nums.size());

    }
    bool poss(vector<int>&nums, int ind , vector<int>&dp , int n)
    {
        if(ind == n-1 ) return true;
        if(nums[ind] == 0) return false;
        if(dp[ind] != -1 ) return dp[ind];

        int max_reach = ind + nums[ind];
        for(int i=ind+1; i<=max_reach; i++)
        {
               if(i<n && poss(nums,i,dp,n))
               {
                   return dp[ind] = true;
               }
        }
        return dp[ind]= false;
    }
};