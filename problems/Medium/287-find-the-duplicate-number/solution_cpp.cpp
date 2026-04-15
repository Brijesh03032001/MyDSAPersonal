class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while( i < n)
        {
            int co = nums[i] - 1;
            if(nums[co] != nums[i])
            {
               swap(nums[co], nums[i]);
            }
            else
            {
                i++;
            }
        }
        
        for(int i = 0; i < n; i++) {
           if(nums[i] != i + 1) {
              return nums[i];
            }
        }

        return 0;
    }
};