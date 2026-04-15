class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int ans_count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
          
            int ind = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            int an = nums.size() - ind;
            if (an >= k) ans_count++;
        }
        
        return ans_count;
    }
};