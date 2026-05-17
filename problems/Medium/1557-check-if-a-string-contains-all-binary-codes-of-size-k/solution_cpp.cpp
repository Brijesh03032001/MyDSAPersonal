class Solution {
public:
    bool hasAllCodes(string s, int k) {

         set<string>st;
        int n = s.size();
         string te = s.substr(0, k);
        if(n < k) return false;
         st.insert(te);
        
         for(int i=k;i<n;i++)
         {
             te+=s[i];
             te.erase(0, 1);
             st.insert(te);
         }   


          int ref_size = 1 << k;
        if(ref_size == st.size())
        {
           return true;
        }
        return false;
    }
};