class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int st1 =0;
        int st2= 0;
        for(int i=0;i<nums.size()-1;i++)
        {
         
            if(nums[i] >= nums[i+1] )
            {
                st1 = i;
                break;
            }
        }
        for(int l= nums.size()-1 ;l>=1; l--)
        {
            if(nums[l] <= nums[l-1] )
            {
                st2 = l;
                break;
            }
        }
        if(st1 == 0) return false;
        if(st2 == nums.size()-1) return false;
        cout << st1 << st2 ;
        if(st1 < st2)
        {
            for(int i=st1 ; i<st2 ;i++)
            {
                if(nums[i] <= nums[i+1])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            return false;
        }
        return false;
    }
};