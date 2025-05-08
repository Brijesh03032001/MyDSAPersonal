class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int te = 0;
        for(int i=0;i< nums.size();i++)
        {
            if(nums[i] == 1)
            {
                te++;
            }
            else
            {
                ans = max(ans, te);
                te = 0;

            }
        }
        return max(ans, te);
    }
};