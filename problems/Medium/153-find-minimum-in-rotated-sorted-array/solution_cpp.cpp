class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l = nums.size()-1;
        int f = 0;
        int ans = -1;
        while(f <= l)
        {
            int mid = f + (l - f)/2;
            if(nums[mid] < nums[0])
            {
                ans = nums[mid];
                l = mid -1;

            }
            else
            {
                f = mid + 1;
            }
        }
        if(ans == -1)
        {
            return nums[0];
        }
        return ans;
    }
};