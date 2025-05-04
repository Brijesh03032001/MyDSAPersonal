class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0; // Not enough elements for a triplet

        long long maxVal = 0;
        int maxPrefix = nums[0]; // Maximum value seen so far
        vector<int> maxSuffix(n, 0);

        // Compute max suffix values
        maxSuffix[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            maxSuffix[i] = max(maxSuffix[i+1], nums[i]);
        }

        // Iterate over the middle element
        for (int j = 1; j < n-1; j++) {
            maxVal = max(maxVal, (long long)(maxPrefix - nums[j]) * maxSuffix[j+1]);
            maxPrefix = max(maxPrefix, nums[j]);
        }

        return maxVal;
    }
};