class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(),nums.end(),target);
        int ans = low - nums.begin();
        return ans;
    }
};