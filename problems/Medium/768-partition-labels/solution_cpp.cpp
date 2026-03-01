class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        int n= s.size();
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]= max(mp[s[i]],i);
        }
       
        vector<int>ans;
        int si=0;
             int end=0;
        for(int i=0;i<n;i++)
        {
            
       
            end=max(end,mp[s[i]]);
            if(i==end)
            {
                si++;
                ans.push_back(si);
                si=0;
                
            }
            else
            {
                si++;
                
            }
            
        }
        return ans;
        
    }
};