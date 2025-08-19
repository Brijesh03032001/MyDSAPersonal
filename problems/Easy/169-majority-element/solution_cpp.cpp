class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if(nums.size()<=2) return nums[0];
        int ans = -1;
        int p1=0;
        int p2=p1+1;
        int res=0;
        int n= nums.size();
        for(int i=0;i<nums.size();i++)
        {
            p1=i;
            p2= i+1;
            while(p2<n && nums[p1]==nums[p2])
            {
                 p2++;
                i++;
            }
            if(res< p2-p1)
            {
                res= p2-p1;
                ans = nums[p2-1];
            }
            
            
        }
       return ans;
    }
};