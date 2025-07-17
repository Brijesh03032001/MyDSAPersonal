class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        for(int j= 0 ; j< matches.size(); j++)
        {
           mp[matches[j][1]]++;
        }

        // for(auto it : mp)
        // {
        //     cout<<it.first << "&&&&&&" << it.second;
        // }
        vector<vector<int>>res;
        set<int>no;
        set<int>one;
        for(int j= 0 ; j< matches.size(); j++)
        {
               cout<< matches[j][1] << " value " << mp[matches[j][1]];
               if( mp.find(matches[j][0]) == mp.end())
               {
                   
                   no.insert(matches[j][0]);
               }
               
               if( mp[matches[j][1]]  == 1)
               {
                   one.insert(matches[j][1]);
               }
        }
        vector<int> no_v(no.begin(), no.end());
        vector<int> one_v(one.begin(),one.end());

        // sort(no.begin(),no.end());
        // sort(one.begin(),one.end());
        res.push_back(no_v);
        res.push_back(one_v);
        return res;
    }
};