class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_set<char>s1(s.begin(), s.end());
        // unordered_set<char>s2(t.begin(), t.end());
        unordered_map<char,int>mp;
        string s1= s;
        string s2= t;
        for(auto it : s1)
        {
            mp[it]++;
        }
        for(auto it : s2)
        {
            if(mp.find(it) == mp.end())
            {
                return false;
            }
            else
            {
                mp[it]--;
            }
        }
        for(auto it : mp)
        {
            if(it.second != 0)
            {
                return false;
            }
        }
        return true;



    }
};