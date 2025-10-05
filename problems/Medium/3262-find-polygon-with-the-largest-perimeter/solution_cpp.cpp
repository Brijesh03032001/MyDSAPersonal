class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int side = nums.size();
        long long peri=0;
        for(int i=0;i<nums.size();i++)
        {
            peri+= nums[i];
        }
       sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size();i++)
        {
            if(peri- nums[i] <= nums[i])
            {
                peri-= nums[i];
                side--;

            }
        }
        if(side >=3)
        {
            return peri;
        }
        return -1;
    }
};