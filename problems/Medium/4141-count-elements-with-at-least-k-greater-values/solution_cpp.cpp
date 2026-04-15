class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans_count = 0;
        
        for (int i = 0; i < n; i++) {
          
            int idx = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            int an = n - idx;
            if (an >= k) ans_count++;
        }
        
        return ans_count;
    }
};