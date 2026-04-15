class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            // first element greater than nums[i]
            int idx = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            int greater = n - idx;
            if (greater >= k) count++;
        }
        
        return count;
    }
};