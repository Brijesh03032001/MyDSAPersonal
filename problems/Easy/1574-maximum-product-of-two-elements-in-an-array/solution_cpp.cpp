class Solution {
public:
    // Function to find the maximum product of two distinct elements in the 'nums' array
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sorting the 'nums' array in ascending order
        
        int x = nums[nums.size() - 1]; // Getting the largest element
        int y = nums[nums.size() - 2]; // Getting the second largest element
        
        return (x - 1) * (y - 1); // Returning the product of (largest - 1) * (second largest - 1)
    }
};

