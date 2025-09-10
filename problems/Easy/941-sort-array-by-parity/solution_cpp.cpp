class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int>ans;
        int le= nums.size();
       vector<int>left;
        for(int i=0;i<le;i++)
        {
          if(nums[i]%2==0)
          {
            ans.push_back(nums[i]);
          }
          else
          {
            left.push_back(nums[i]);
          }
        }
      ans.insert(ans.end(), left.begin(), left.end());
      return ans;
        
    }
};