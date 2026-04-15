class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        long long maxPro = INT_MIN; // Use long long to prevent overflow
        
        // 1. Scan from Left to Right
        long long currentPro = 1;
        for (int i = 0; i < n; i++) {
            currentPro *= nums[i];
            
            // Update the global maximum
            maxPro = max(maxPro, currentPro);
            
            // If we hit a zero, the subarray "breaks". 
            // Reset currentPro to 1 so the next number starts a new subarray.
            if (currentPro == 0) {
                currentPro = 1;
            }
        }

        // 2. Scan from Right to Left
        currentPro = 1;
        for (int i = n - 1; i >= 0; i--) {
            currentPro *= nums[i];
            
            // Update the global maximum
            maxPro = max(maxPro, currentPro);
            
            if (currentPro == 0) {
                currentPro = 1;
            }
        }

        return (int)maxPro;
    }
};