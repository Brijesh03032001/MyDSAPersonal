class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+= nums[i];
            if(res<sum)
            {
                res= sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        } 
        // if(res<0)
        // {
        //     return 0;
        // }
        return res;

    }
};