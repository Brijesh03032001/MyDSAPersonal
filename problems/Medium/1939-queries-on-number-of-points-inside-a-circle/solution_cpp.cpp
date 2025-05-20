class Solution {
public:
    int solve(vector<vector<int>>& points , int x, int y, int r)
    {
        int le = points.size();
        int c = 0;
        for(int i=0;i<le;i++)
        {
            int x_c = points[i][0];
            int y_c = points[i][1];
            if ( ( (x_c - x)*(x_c - x) + (y_c - y)*(y_c - y) ) <= (r*r))
            {
                c++;
            }
        }
        return c;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        int n = queries.size();
        for(int i=0;i<n;i++)
        {
            int a = solve(points, queries[i][0], queries[i][1], queries[i][2]);
            ans.push_back(a);
        }
        return ans;
    }
};