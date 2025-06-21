class Solution {
    // https://www.youtube.com/watch?v=r3EnymXRC9A duration 19min above , why sorting se frk nhi pda
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            auto x = lower_bound(nums.begin()+i+1, nums.end() , lower- nums[i]);
            auto y = lower_bound(nums.begin()+i+1 , nums.end() , upper - nums[i]+1);
            ans += (y-x);
        }
        return ans;
    }
};