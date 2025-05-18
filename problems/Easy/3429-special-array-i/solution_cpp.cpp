class Solution {
public:
int findParity(int x) {
        return x % 2; // Simplified parity check
    }

    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1) return true; // Single element is always special

        int ini = findParity(nums[0]); // Get parity of the first element

        for (int i = 1; i < nums.size(); i++) {
            int temp = findParity(nums[i]);

            if (temp == ini) { // If parity is same as previous, return false
                return false;
            }
            ini = temp; // Update parity for the next iteration
        }
        return true; // If loop completes, array is special
    }
    
};