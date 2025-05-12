class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res (n , -1);
        long long su = 0;
        int i=0;
        int j=0;
        int w_size = 2*k + 1;
        while(j< n)
        {
            su += nums[j];
            if(j-i+1 == w_size)
            {
                res[i+k] = (su/ w_size);
                su -= nums[i];
                i++;
            }
            j++;
        }
        return res;

    }
};