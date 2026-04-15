class Solution {
public:
    int dp[501][501];
    int lcs(vector<int>& nums1, vector<int>& nums2 , int l1, int l2)
    {
         if(l1 == 0 || l2==0)
         {
            return 0;
         }
         if(dp[l1][l2] != -1)
         {
            return dp[l1][l2];
         }
         if(nums1[l1-1] == nums2[l2-1])
         {
             return dp[l1][l2] = 1 + lcs(nums1, nums2, l1-1, l2-1);
         }
         else
         {
             int t1 = lcs(nums1, nums2, l1-1, l2);
             int t2 = lcs(nums1, nums2, l1, l2-1);
             return dp[l1][l2] = max(t1,t2);
         }
        
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int l1= nums1.size();
        int l2 = nums2.size();
        memset(dp, -1, sizeof(dp));
        int ans = lcs(nums1, nums2, l1 , l2);
        return ans;
    }
};