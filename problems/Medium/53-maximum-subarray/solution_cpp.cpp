class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int su =0;
        for(int i=0;i<nums.size();i++)
        {
            su += nums[i];
            
                maxi = max(maxi, su);

            if(su < 0)
            {
                su = 0;
            }
           
        }
        return maxi;
    }
};