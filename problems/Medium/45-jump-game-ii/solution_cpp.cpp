class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return poss(nums,0,dp , nums.size());
    }
    int poss(vector<int>&nums, int ind , vector<int>&dp , int n)
    {
        if(ind >= nums.size()-1){
            return 0;
        }
        if(dp[ind] != -1 ) return dp[ind];

        int max_reach = ind + nums[ind];
        int mini = 10002;
        for(int i=ind+1; i<=max_reach; i++)
        {
             
                   mini = min(mini, 1+ poss(nums,i,dp,n));
               
        }
       
        return  dp[ind]= mini;
    }
};


 