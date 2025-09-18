class Solution {
public:
    static bool com(pair<int,int> a , pair<int,int> b)
    {
        if(a.first< b.first)
        {
           return true;
        }
        else if(a.first==b.first && a.second<b.second)
        {
            return true;
        }
        return false;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n= mat.size();
        int m= mat[0].size();
        vector<pair<int,int>>vc;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            vc.push_back({c,i});
            
        }
        
        sort(vc.begin(),vc.end(),com);
        int le=0;
        vector<int>res;
        for(auto i: vc)
        {
            if(le<k)
            {
            res.push_back(i.second);
            le++;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};