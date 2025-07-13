class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        unordered_map<int, set<int>> mp;
        for(int i=0;i<points.size();i++)
        {
            mp[points[i][0]].insert(points[i][1]);
        }
        int res = INT_MAX;
        for(int i=0;i<points.size()-1;i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                  int x1 = points[i][0];
                  int y1 = points[i][1];
                  int x2 = points[j][0];
                  int y2 = points[j][1];
                  
                  if((x1 != x2) && (y1 != y2))
                  {
                      if((mp[x1].find(y2) != mp[x1].end()) && (mp[x2].find(y1) != mp[x2].end()))
                      {
                        int x = abs(x1-x2);
                        int y= abs(y1-y2);
                        res = min(res, x*y);
                      }
                  }
            }
        }
        if(res != INT_MAX) return res;
        return 0;
    }
};