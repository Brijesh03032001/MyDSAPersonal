class Solution {
public:
    bool val(vector<int>&nums, int ref_su, int k)
    {
        int n = nums.size();
        int su = 0;
        for(int i=0;i<n;i++)
        {
            su+= nums[i];
            if(su >  ref_su)
            {
                 k--;
                 su = nums[i];
                 if(k==0) return false;
            }
           
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        
        int lo = nums[0];
        int hi = 0;
        for(int i=0;i<n;i++)
        {
            lo = max(lo, nums[i]);
            hi += nums[i];
        }
        int ans = hi;
        while(lo <= hi)
        {
              int mid = lo + (hi-lo)/2;
              if(val(nums,mid,k))
              {
                   ans = min(ans, mid);
                   hi = mid -1 ;
              }
              else
              {
                  lo = mid+1;
              }
        }
        return ans;
    }
};