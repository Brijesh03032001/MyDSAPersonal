class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>mp;
        if(n==1 && trust.size()==0) return 1;
        for(int i=0;i<trust.size();i++)
        {
            int f = trust[i][0];
            int s= trust[i][1];
            mp[s]++;
        }
        int match = n;
        for(auto it: mp)
        {
            if(it.second == match-1)
            {
                for(int i=0;i<trust.size();i++)
                {
                    if(it.first == trust[i][0])
                    {
                       return -1;
                    }
                    
                }
                return it.first;
            }
        }
        return -1;
    }
};