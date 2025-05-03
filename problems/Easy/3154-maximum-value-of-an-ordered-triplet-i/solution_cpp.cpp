class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long maxTriplet = LLONG_MIN;

        // Brute force O(n³) approach
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long diff = (long long)(nums[i] - nums[j]) * (long long)nums[k];

                    // Update maxTriplet if we find a larger value
                    maxTriplet = std::max(maxTriplet, diff);
                }
            }
        }

        // If maxTriplet is negative, return 0 (as per problem constraints)
        return maxTriplet > 0 ? maxTriplet : 0;
    }
};