class Solution {
public:
    int dp[201][10001];
    // anything above (100*200)/2 ; 
    bool sol(vector<int>& arr, int W, int i)
    {
        if(W <= 0) return true;
        if(i == 0 ) return false;
        
        if(dp[i][W] != -1)
        {
            return dp[i][W];
        }
        if(arr[i-1] > W)
        {
             return dp[i][W] = sol(arr, W, i-1);

        }
        else
        {
             bool take = sol(arr, W - arr[i-1] , i-1);
             bool not_take = sol(arr, W, i-1);
             int res = take || not_take;
             return dp[i][W] = res;
        }
        return false;
    }
    bool canPartition(vector<int>& nums) {
          int n = nums.size();
          int su =0;
         for(int i=0;i<nums.size();i++)
         {
              su += nums[i];
         }
         if(su%2 != 0) return false;
         else
         {
             memset(dp, -1, sizeof(dp));
             return sol(nums, su/2, n);
         }
         return true;
    }
};