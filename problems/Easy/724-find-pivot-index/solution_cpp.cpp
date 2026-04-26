class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lef=nums.size();
        int su=0;
        int le=0;
        for(int i=0;i<nums.size();i++)
        {
            su+=nums[i];
        }
        for(int i=0;i<lef;i++)
        {
            su-=nums[i];
            if(le==su)
            {
                return i;
            }
            le+=nums[i];
            
        }
        return -1;
    }
};