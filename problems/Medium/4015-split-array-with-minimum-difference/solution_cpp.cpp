class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int N = nums.size();
        if (N < 2) {
            return -1; // Cannot split into two non-empty subarrays
        }

        // --- 1. Pre-compute Prefix Sums (O(N)) ---
        // P[i] stores the sum of nums[0] to nums[i-1]
        vector<long long> P(N + 1, 0);
        for (int i = 0; i < N; ++i) {
            P[i + 1] = P[i] + nums[i];
        }

        // --- 2. Pre-compute Left Validity (Strictly Increasing) (O(N)) ---
        // ValidL[i] = true if nums[0...i-1] is strictly increasing
        vector<bool> ValidL(N + 1, false);
        ValidL[1] = true; // Subarray of length 1 (nums[0...0]) is valid
        
        for (int i = 2; i <= N; ++i) {
            // Check if previous prefix was valid AND the new element maintains the strict increase
            if (ValidL[i-1] && nums[i-1] > nums[i-2]) {
                ValidL[i] = true;
            }
        }
        
        // --- 3. Pre-compute Right Validity (Strictly Decreasing) (O(N)) ---
        // ValidR[i] = true if nums[i...N-1] is strictly decreasing
        vector<bool> ValidR(N, false);
        ValidR[N-1] = true; // Subarray of length 1 (nums[N-1...N-1]) is valid

        for (int i = N - 2; i >= 0; --i) {
            // Check if next suffix was valid AND the new element maintains the strict decrease
            if (ValidR[i+1] && nums[i] > nums[i+1]) {
                ValidR[i] = true;
            }
        }

        // --- 4. Final Sweep (O(N)) ---
        long long min_diff = -1;

        // Iterate through all possible split points i (1 <= i <= N-1)
        // Split: L = nums[0...i-1], R = nums[i...N-1]
        for (int i = 1; i < N; ++i) {
            // Check if both subarrays are valid based on our pre-computation
            if (ValidL[i] && ValidR[i]) {
                
                long long sumL = P[i];
                long long sumR = P[N] - P[i];
                long long current_diff = abs(sumL - sumR);

                // Update minimum difference
                if (min_diff == -1 || current_diff < min_diff) {
                    min_diff = current_diff;
                }
            }
        }

        return min_diff;
    }
};