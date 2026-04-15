class Solution {
public:
    // reverse digits of a non-negative integer, dropping leading zeros after reversing
    long long reverseInt(long long x) {
        long long r = 0;
        while (x > 0) {
            r = r * 10 + (x % 10);
            x /= 10;
        }
        return r;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n = (int)nums.size();
        const int INF = 1e9;
        int ans = INF;

        // map from reversed value -> latest index i where reverse(nums[i]) == key
        unordered_map<long long, int> seenRevIndex;
        seenRevIndex.reserve(n * 2);

        for (int j = 0; j < n; ++j) {
            // check if there's any earlier i with reverse(nums[i]) == nums[j]
            auto it = seenRevIndex.find(nums[j]);
            if (it != seenRevIndex.end()) {
                int i = it->second;        // guaranteed i < j
                ans = min(ans, j - i);
                if (ans == 1) return 1;    // early exit, can't get smaller than 1
            }

            // add current index as candidate for future j's:
            long long rev_j = reverseInt(nums[j]);
            // store latest index for this reversed value (we want the closest i < future j)
            seenRevIndex[rev_j] = j;
        }

        return (ans == INF ? -1 : ans);
    }
};