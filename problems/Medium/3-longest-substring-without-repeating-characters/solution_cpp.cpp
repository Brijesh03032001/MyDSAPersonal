class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) return s.size();
        unordered_map<char,int>mp;
        int ans = 0;
        int p1= 0;
        int p2= 1;
        mp[s[p1]] = 1;
        int le = 1;
        int n= s.size();
        while(p1 < p2 && p2 < n)
        {
            if(mp.find(s[p2]) == mp.end())
            {
                
                mp[s[p2]] = p2;
                
            }
            else
            {
                 
                 int t1 = p1;
                 while(t1< p2)
                 {
                   if(s[t1] != s[p2])
                   {
                       mp.erase(s[t1]);
                       t1++;
                   }
                   else
                   {
                   
                    p1 = t1+1;
                    break;
                   }
                 }
                 
                 
                
            }
            p2++;
            ans = max(ans,p2-p1);
        }
        return ans;
    }
};
 