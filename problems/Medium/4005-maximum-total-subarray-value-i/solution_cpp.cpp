class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxxx = -1;
        long long minnn = 1e9+7;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > maxxx)
            {
                maxxx = nums[i];
            }

            if(nums[i] < minnn)
            {
                minnn = nums[i];
            }
        }
        long long diff = maxxx - minnn;
        long long ki = (long long) k;
        return diff * ki;
    }
    
};