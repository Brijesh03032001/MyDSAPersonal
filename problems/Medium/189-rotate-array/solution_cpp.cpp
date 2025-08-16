class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>nums2;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            nums2.push_back(nums[i]);

        }
        k=k%n;
        for(int i=0;i<n;i++)
        {
             nums[(i+k)%n] = nums2[i];
        }
        return ;

    }
};