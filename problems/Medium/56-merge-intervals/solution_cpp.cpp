class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
        vector<int>pre = intervals[0];
        vector<vector<int>> res;
        for(int i=1;i<intervals.size();i++)
        {
            vector<int>curr = intervals[i];
            if(pre[1] < curr[0])
            {
                res.push_back(pre);
                pre= curr;
            }
            else
            {
                pre[1]= max(pre[1], curr[1]);
            }
        }
        res.push_back(pre);
        return res;
        
    }
};