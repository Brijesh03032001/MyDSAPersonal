class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        map<int,int>mp;
        int n = intervals.size();

        for(int i=0;i<n;i++)
        {
            mp[intervals[i][0]] += 1;
            mp[intervals[i][1]] -= 1;
                      
        }
        int cur = 0, ans = 0;

        for(auto it : mp)
        {
            cur += it.second;
            ans = max(ans, cur);
        }
        return ans;
    }
};