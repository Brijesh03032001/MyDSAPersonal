class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int p1= 0;
        int p2= 0;
        long long su = 0;
        unordered_map<int,int> mp;
        long long temp_su = 0;
        int n = nums.size();
        
        while(p2 < n && p2 - p1 + 1 <= k)
        {

            if(mp.find(nums[p2]) == mp.end())
            {
                 mp[nums[p2]] = p2;
            }
            else
            {
                p1 = mp[nums[p2]]+1;
                for(auto it = mp.begin(); it != mp.end(); )
                {
                        if(it->second < p1)
                        {
                            it = mp.erase(it);
                        }
                        else
                        {
                            ++it;
                        }
                }
                
               
                mp[nums[p2]]= p2;
                temp_su =0;
                for(int t = p1; t<p2;t++)
                {
                    temp_su += nums[t];
                }
            }
            temp_su += nums[p2];
            if(p2-p1+1 == k)
            {
                su = max(su,temp_su); 
            }

            p2++;

            if(p2 - p1 + 1 > k)
            {
               temp_su -= nums[p1];
               if(mp.find(nums[p1]) != mp.end())
               {
                 mp.erase(nums[p1]);
               }
               p1++;
               
            }
        }


        return su;
    }
};