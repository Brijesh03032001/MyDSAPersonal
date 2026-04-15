class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l1 = s.size();
        int l2= t.size();
        if( l1 != l2) return false;

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        // check one to one mapping

        for(int i=0;i< l1 ;i++)
        {
            if(mp1.find(s[i]) == mp1.end())
            {
                 mp1[s[i]] = t[i];
            }
            else
            {
                 if( mp1[s[i]] != t[i])
                 {
                    return false;
                 }
            }
        }
        for(int i=0;i< l1 ;i++)
        {
            if(mp2.find(t[i]) == mp2.end())
            {
                 mp2[t[i]] = s[i];
            }
            else
            {
                 if( mp2[t[i]] != s[i])
                 {
                    return false;
                 }
            }
        }
        return true;
    }
};