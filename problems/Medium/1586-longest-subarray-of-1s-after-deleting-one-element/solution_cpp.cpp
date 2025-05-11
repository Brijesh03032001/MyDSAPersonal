class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ZeroCount = 0;
        int i =0, j=0;
        int n = nums.size();
        int ans = 0;
        while(j< n)
        {
            if(nums[j] == 0) ZeroCount++;
            while(ZeroCount > 1)
            {
                if(nums[i] == 0) ZeroCount --;
                i++;
            }
            ans = max(ans, j-i);
            j++;
        }
        return ans;
    }
};