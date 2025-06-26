class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
         int maxVal = (1 << maximumBit) - 1; // This is 2^maximumBit - 1
        int currentXor = 0;
        std::vector<int> answer(nums.size());
        
        // Calculate the XOR of all elements in nums initially
        for (int num : nums) {
            currentXor ^= num;
        }
        
        // Iteratively calculate the answer for each query
        for (int i = 0; i < nums.size(); ++i) {
            answer[i] = currentXor ^ maxVal; // Calculate k for this query
            currentXor ^= nums[nums.size() - 1 - i]; // Remove the last element
        }
        
        return answer;
    }
};