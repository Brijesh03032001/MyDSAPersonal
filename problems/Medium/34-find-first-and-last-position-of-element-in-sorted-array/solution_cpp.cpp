class Solution {
public:
    int first(vector<int>&nums , int target , int n)
    {
        int lo = 0;
        int high = n-1;
        int ans = -1;
        
        while(lo<=high)
        {
            int mid = lo + (high-lo)/2;
            if(nums[mid]<target)
            {
                lo=  mid+1;
            }
            else
            {
                if(nums[mid]== target) {
                      ans = mid;
                }
               
                high = mid -1;
            }
        }
       
        return ans;
    }
    int last(vector<int>&nums , int target , int n)
    {
        int lo = 0;
        int high = n-1;
        int ans = -1;
        
        while(lo<=high)
        {
            int mid = lo + (high-lo)/2;
            if(nums[mid]<=target)
            {
                if(nums[mid]== target)
                {
                    ans = mid;
                }
                lo=  mid+1;
            }
            else
            {
                high = mid -1;
            }
        }
        
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        res.push_back(first(nums,target,nums.size()));
        res.push_back(last(nums, target, nums.size()));
        return res;      
    }
};