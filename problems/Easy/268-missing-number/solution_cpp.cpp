class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // 3 , 0 , 1
        // i =0; 
        int i = 0;
        int n = nums.size();
        while( i < n)
        {
            int co = nums[i];
            if(co != n && nums[co] != nums[i])
            {
               swap(nums[co], nums[i]);
            }
            else
            {
                i++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
        }
        return n;

    }
};