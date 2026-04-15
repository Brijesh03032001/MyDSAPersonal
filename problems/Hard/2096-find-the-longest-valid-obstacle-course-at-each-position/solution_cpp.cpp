class Solution {
public:
    vector<int> LIS_each_index(vector<int>& nums) {
        int n = nums.size();
        vector<int> lisLen(n);
        vector<int> tails;

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            // 🔥 CHANGE: upper_bound instead of lower_bound
            auto it = upper_bound(tails.begin(), tails.end(), x);
            int idx = it - tails.begin();

            if (it == tails.end()) {
                tails.push_back(x);
            } else {
                *it = x;
            }

            lisLen[i] = idx + 1;
        }
        return lisLen;
    }

    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        return LIS_each_index(obstacles);
    }
};
