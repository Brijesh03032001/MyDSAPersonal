class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int max_ele = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max_ele)
            {
                max_ele = nums[i];
            }
        }

        vector<int> li;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == max_ele)
            {
                li.push_back(i);
            }
        }

        long long ans = 0;

        if(li.size() < k) return 0;

        int n = nums.size();

        for(int i = k - 1; i < li.size(); i++)
        {
            long long mul = 0;

            if(i == li.size() - 1)
            {
                mul = n - li[i];
            }
            else
            {
                mul = li[i + 1] - li[i];
            }

            ans += mul * (long long)(li[i - k + 1] + 1);
        }

        return ans;
    }
};