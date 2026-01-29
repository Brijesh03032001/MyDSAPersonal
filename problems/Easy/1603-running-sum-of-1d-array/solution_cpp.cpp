class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>pre;
        pre.push_back(nums[0]);
        int su= nums[0];
        for(int i=1;i<nums.size();i++)
        {
          su+=nums[i];
          pre.push_back(su);
        }
      return pre;
    }
};