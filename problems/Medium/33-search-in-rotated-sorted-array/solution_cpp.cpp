class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int n= nums.size();
        int high = n-1;
        int ans = -1;
        while(lo<=high)
        {
            int mid = lo +(high-lo)/2;
            if(nums[mid]== target)
            {
                return mid;
            }
            if(nums[0] <= target) // target in left sorted array
            {
                   if(nums[0]>nums[mid])
                   {
                       high = mid-1;
                   }
                   else
                   {
                       if(nums[mid]<target)
                       {
                           lo=mid+1;
                       }
                       else
                       {
                           high = mid-1;
                       }
                   }
            }
            else if(nums[0]> target) //target in right sorted array
            {
                       if(nums[mid]>= nums[0])
                       {
                           lo= mid+1;
                       }
                       else
                       {
                           if(nums[mid]< target)
                           {
                               lo=mid+1;
                           }
                           else
                           {
                               high = mid-1;
                           }
                       }
            }
        }
        return ans;
    }
};