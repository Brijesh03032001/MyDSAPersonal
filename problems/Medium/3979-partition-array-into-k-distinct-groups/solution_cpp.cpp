class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int nOFGroups = nums.size()/ k;
        if(nums.size() % k != 0) return false;
        vector<pair<int,int>> vc;
        for(auto it : mp)
        {
            vc.push_back({it.second, it.first});

        }
        sort(vc.rbegin(), vc.rend());
        for(auto it : vc)
        {
            if(it.first > nOFGroups) return false;

        }
        return true;
    }
};