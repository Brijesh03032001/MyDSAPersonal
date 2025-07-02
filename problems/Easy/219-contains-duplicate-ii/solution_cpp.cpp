class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }

        for(auto it : mp)
        {
            if(it.second.size()> 1)
            {
                vector<int>ind = it.second;
                int p1=0;
                int p2= 1;
                while(p2<ind.size())
                {
                    if(ind[p2]-ind[p1] <= k)
                    {
                        return true;
                    }
                    else
                    {
                        p1= p2;
                        p2 = p2+1;
                    }
                }
            }
        }
        return false;
    }
};