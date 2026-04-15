class Solution {
public:
    int maxDistinct(string s) {
       unordered_map<char,int> st;
       int ans = 0;
       for(int i=0;i<s.size();i++)
        {
           if(st.find(s[i]) == st.end())
           {
               st[s[i]]++;
               ans++;
           }
         }
        return ans;
    }
};