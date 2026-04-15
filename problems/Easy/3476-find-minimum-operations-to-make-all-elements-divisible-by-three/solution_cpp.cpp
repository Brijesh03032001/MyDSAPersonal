class Solution {
public:
    int minimumOperations(vector<int>& nums) {

       int ans =0;
       for(auto num : nums)
       {
           int remainder = num%3;
           int minimum_operation = min(remainder, 3 - remainder);
           ans+= minimum_operation;
       } 
    return ans;
    }
};