class Solution {
public:
    int sol(vector<int>&nums, int i, int W)
    {
        if(W == 0) return 1;
        if(i== 0) return 0;
        if(nums[i-1] > W)
        {
            return sol(nums, i-1, W);
        }
        else
        {
            int taken = nums[i-1] * sol(nums, i, W - nums[i-1]);
            int not_taken = sol(nums, i-1 , W);
            return max(not_taken, taken);
        }
        return 0;
    }
    int integerBreak(int n) {
        vector<int> fd;
        if(n == 2) return 1;
        if(n == 3) return 2;
        for (int i = 2; i <= n-1; i++)
        {

        
            fd.push_back(i);
        
          }

        return sol(fd, fd.size(), n);
    }
};