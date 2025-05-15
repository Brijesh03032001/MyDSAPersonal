class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> vc;
        int le = s.size();
        if( le < t.size()) return "";
        for(int i=0;i<t.size();i++)
        {
            vc[t[i] - 'A'] ++;
        }
        int start_i= 0;
        int counted_req = t.size();
        int i =0 , j=0;
        int windowSize = INT_MAX;
        while(j < le)
        {
            
            if(vc[s[j]- 'A'] > 0)
            {
                counted_req --;

            }

            vc[s[j]- 'A'] --;
            while(counted_req == 0)
            {
                int te = j-i+1;
                if( te < windowSize)
                {
                    start_i  = i;
                    windowSize = te;
                }
                vc[s[i]- 'A']++;
                if(vc[s[i]- 'A'] > 0)
                {
                    counted_req ++;
                }
                i++;
            }
            j++;
        }
        if(windowSize == INT_MAX)
        {
            return "";
        } 
        return s.substr(start_i, windowSize);


    }
};