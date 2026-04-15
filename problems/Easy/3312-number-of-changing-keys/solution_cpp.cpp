class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i=0;i<s.size()-1;i++)
        {
            char f = tolower(s[i]);
            char se = tolower(s[i+1]);
            if(f != se)
            {
                ans ++;
            }
            
        }
        return ans;
    }
};