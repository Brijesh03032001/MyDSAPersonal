class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1= lower_bound(nums.begin(), nums.end(), target);
        int lo_in = it1 - nums.begin();
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        int up_in = it2 - nums.begin();
        vector<int>ans(2,-1);
        if (lo_in < nums.size() && nums[lo_in] == target)
        {
            ans[0] = lo_in;
             ans[1] = up_in- 1;
        }
        
           
     
        return ans;
    }
};