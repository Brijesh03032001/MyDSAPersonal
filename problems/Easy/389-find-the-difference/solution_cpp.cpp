class Solution {
public:
    char findTheDifference(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        int le  = min(s.size(), t.size());
        for(int i=0;i<le;i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
           
        }
        return t[le];
        
    }
};