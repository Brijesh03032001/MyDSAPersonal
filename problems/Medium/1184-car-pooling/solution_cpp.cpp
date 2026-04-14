class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(int i=0;i<trips.size();i++)
        {
            mp[trips[i][1]] += trips[i][0];
            mp[trips[i][2]] -= trips[i][0];
        }
        int su = 0;
        int maxi = 0;
        for(auto it : mp)
        {
            su += it.second;
            maxi = max(maxi, su);
        }
        if(maxi > capacity)
        {
            return false;
        }
        return true;
    }
};