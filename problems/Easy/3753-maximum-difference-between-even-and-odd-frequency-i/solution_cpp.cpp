class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i< s.size();i++)
        {
            mp[s[i]]++;
        }
         int ev = INT_MAX;
         int od = INT_MIN;

        for(auto it : mp)
        {
             if(it.second % 2 == 0)
             {
                ev = min(ev, it.second);
             }
             else
             {
                od = max(od, it.second);
             }
        }
        return od - ev;
    }
};