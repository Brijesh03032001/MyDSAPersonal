class Solution {
public:
    int partitionString(string s) {
        
        map<char,int>mp;
        int p1=0;
        int le=s.length();
        if(le==0) return 0;
        
        int count=1; 
        while(p1<le)
        {
           
            char ref= s[p1];
            if(mp[s[p1]]==1) 
            { 
             mp.clear();
             count++;
             mp[ref]++;
            }
            else
            {
            mp[ref]++;
            }
            
            p1++;
        }
        return count;
    }
};