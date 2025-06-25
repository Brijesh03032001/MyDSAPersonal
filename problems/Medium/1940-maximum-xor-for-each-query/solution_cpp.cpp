class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxVal = (1 << maximumBit) - 1; 
        int currentXor = 0;
        vector<int> answer(nums.size());
        
       
        for (int num : nums) {
            currentXor ^= num;
        }
        
       
        for (int i = 0; i < nums.size(); ++i) {
            answer[i] = currentXor ^ maxVal; 
            currentXor ^= nums[nums.size() - 1 - i];
        }
        
        return answer;
    }
};