class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        map<int,int> mp;

int val = 1;
int n = intervals.size();
if(n==0) return true;
for(int i=0;i<n;i++)
{
    int start = intervals[i][0];
    int end = intervals[i][1];
    mp[start] += val;
    mp[end] -= val;
}

int cur = 0, ans = 0;

for(auto it : mp)
{
    cur += it.second;
    ans = max(ans, cur);
}

if(ans == 1) return true;
else return false;
    }
};