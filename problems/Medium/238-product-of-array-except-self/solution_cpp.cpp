class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>pos;
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            pre.push_back(pro);
            pro= pro* nums[i];

        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            pos.push_back(pro);
            pro= pro* nums[i];
            
        }
        reverse(pos.begin(), pos.end());
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            res[i] = pre[i] * pos[i];
        }
        return res;
    }
};