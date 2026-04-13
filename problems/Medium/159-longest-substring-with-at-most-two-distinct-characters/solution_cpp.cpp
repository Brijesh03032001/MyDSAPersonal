class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int s1= 0;
        int s2=0;
        int le = 0;
        int k=2;
        int n = s.size();
        unordered_map<char,int>mp;
        while(s2 < n)
        {

        
           
                mp[s[s2]]++;
                s2++;
            
            if(mp.size() > k)
            {
                while(mp.size() > k)
                {
                    mp[s[s1]]--;
                    if(mp[s[s1]] == 0) mp.erase(s[s1]);
                    s1++;
                }
            }
            
            le = max(le , s2 - s1);
            
        }
        return le;
        
    }
};