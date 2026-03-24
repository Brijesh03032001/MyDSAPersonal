class Solution {
public:
    
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>outdegree(n, 0);
        for(int i=0;i<roads.size();i++)
        {
        
         outdegree[roads[i][0]]++;
         outdegree[roads[i][1]]++;
        }

        vector<vector<int>>pai(n);
        for(int i=0;i<n;i++)
        {
            pai[outdegree[i]].push_back(i);
        }
        long long ans = 0;
        long long level = 0;  // store outdegree level
        long long uni_inc = 1;
        for(auto it : pai)
        {
            
            vector<int> v = it;

            // cout << outdregree_val << "Outdegree \n";
            for(int j=0;j<v.size();j++)
            {
                cout << v[j] << "**";
                ans += (level* uni_inc);
                uni_inc++;
            }

            level++;
        }

        return ans;

    }
};