class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;

        }
        int c = 0;

        for(auto it: mp)
        {
            if(it.second%2 == 0)
            {  
                    c+= 2;
            }
            else
            {
                c+=1;
            }
        }
        return c;
    }
};