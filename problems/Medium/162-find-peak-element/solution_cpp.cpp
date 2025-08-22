class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int lo=0;
        int high = n-1;
        while(lo<=high)
        {
            int mid = lo + (high-lo)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            if(nums[mid]<nums[mid+1]){
                 lo=mid+1;
            }  
            else
            {
                high = mid -1;
            }
        }
        return 0;
    }
};