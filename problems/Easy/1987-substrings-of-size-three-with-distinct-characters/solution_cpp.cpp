class Solution {
public:
      int maximumSubarraySum(string nums, int k) {
        int p1= 0;
        int p2= 0;
        int su = 0;
        unordered_map<char,int> mp;
        int temp_su = 0;
        int n = nums.size();
        
        while(p2 < n && p2 - p1 + 1 <= k)
        {

            if(mp.find(nums[p2]) == mp.end())
            {
                 mp[nums[p2]] = p2;
            }
            else
            {
                while(mp.find(nums[p2]) != mp.end())
                {
                    mp.erase(nums[p1]);
                    // temp_su -= nums[p1];
                    p1++;
                }
                mp[nums[p2]] = p2;
            }
            // temp_su += nums[p2];
            if(p2-p1+1 == k)
            {
                su++; 
            }

            p2++;

            if(p2 - p1 + 1 > k)
            {
            //    temp_su -= nums[p1];
               if(mp.find(nums[p1]) != mp.end())
               {
                 mp.erase(nums[p1]);
               }
               p1++;
               
            }
        }


        return su;
    }
    int countGoodSubstrings(string s) {
        return maximumSubarraySum(s, 3); 
    }
};