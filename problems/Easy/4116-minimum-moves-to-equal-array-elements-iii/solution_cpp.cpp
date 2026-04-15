class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int an = 0;
        int ref = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            an += (ref - nums[i]);
        }
        return an;
    }
};