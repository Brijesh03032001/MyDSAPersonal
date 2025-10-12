class Solution {
public:
    int firstUniqChar(string s) {
        map<char, pair<int,int>>mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]].first++;
            }
            else
            {
                mp[s[i]]= {1,i};
            }
        }

        int res = s.size();
        for(auto it : mp)
        {
            if(it.second.first == 1 && res > it.second.second)
            {
                res = it.second.second;
            }
        }
        if(res == s.size())
        {
            return -1;
        }
        return res;
    }
};