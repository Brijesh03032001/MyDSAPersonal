
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                cout<<nums[i];
            neg.push_back(nums[i]);
            }
        }
        vector<int>res;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                res.push_back(nums[i]);
                 res.push_back(neg[j]);
                j++;
            }
            
        }
        return res;
    }
};