class Solution {
public:
    int fir(vector<int>&nums, int ta)
    {
        int f = 0;
        int l = nums.size()-1;
        int ans = -1;
        while(f <= l)
        {
        int mid = (f + l)/2;
        if(nums[mid] < ta)
        {
            f = mid + 1;
        }
        else
        {
             if(nums[mid] == ta)
            {
            ans = mid;

            }
           
            l = mid - 1;
        }

        }
        return ans;
    }
    int las(vector<int>&nums, int ta)
    {
        int f = 0;
        int l = nums.size()-1;
        int ans = -1;
        while(f <= l)
        {
        int mid = (f + l)/2;
        if(nums[mid] <= ta)
        {
            if(nums[mid] == ta)
            {
            ans = mid;

            }
            f = mid + 1;
        }
        else
        {
            
            l = mid - 1;
        }

        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};
        int f = fir(nums, target);
        int l = las(nums, target);

        return {f,l};
    }
};