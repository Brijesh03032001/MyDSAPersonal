class Solution {
public:
    int maxVowels(string s, int k) {
      int i =0;
      int j= 0;
      int ans = 0;
      unordered_map<char,int> mp;
      int n = s.size();
      while(j< n)
      {
        if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') 
        {
            mp[s[j]]++;
        }
        if(j-i + 1 == k)
        {
            int te =0;
            for(auto it : mp)
            {
                te +=  it.second;
            }
            ans = max(ans, te);
            if(mp[s[i]] > 0)
            {
                mp[s[i]]--;
            }
            i++;
        }

        j++;
      }
      return ans;
    }
};