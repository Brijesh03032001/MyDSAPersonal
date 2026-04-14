class Solution {
public:
    struct myComp {
    bool operator()(
        pair<pair<int,int> , double> const& a,
        pair<pair<int,int>, double> const& b)
       
    {
       
        return a.second > b.second;
        
    }
};
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       
        
        priority_queue<pair<pair<int,int>, double>, vector<pair<pair<int,int>, double>>, myComp> pq;
        for(int i=0;i<points.size();i++)
        {
            double k = sqrt(((points[i][1])*(points[i][1]))+((points[i][0])*(points[i][0])));
            
            pq.push(make_pair(make_pair(points[i][0],points[i][1]),k));
            
        }
        vector<vector<int>>res;
        for(int i=0;i<k;i++)
        {
            vector<int>ans;
            pair<pair<int,int>,double> pai= pq.top();
            ans.push_back(pai.first.first);
            ans.push_back(pai.first.second);
            pq.pop();
            res.push_back(ans);
        }
        return res;
        
    }
};