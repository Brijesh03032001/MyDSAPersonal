class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int su=INT_MIN;
        if(nums.size()<2)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i+1]-nums[i] > su)
                {
                    su= nums[i+1] - nums[i];
                }
                
            }
            return su;
        }
        
    }
};