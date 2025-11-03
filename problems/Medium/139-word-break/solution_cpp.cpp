class Solution {
public:
    
    bool solve(string &s,int l, int r, unordered_map<string, bool> &dict, vector<vector<int>> &dp)
    {
           if(l>r)
            return false;
        
        if(dp[l][r]!=-1)
            return dp[l][r];
        
            if(dict[s.substr(l, r-l+1)]==true)
                return true;
      
        bool ans  =false;
        
        for(int k = l ; k<r; ++k)
        {
            ans|=(solve(s, l , k, dict, dp) && solve(s, k+1, r, dict, dp));
        }
        
        return dp[l][r] = ans;
    }
    
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_map<string , bool> st;
        
        for(int i = 0 ; i<wordDict.size(); ++i)
            st[wordDict[i]] = true;
        st[""] = true;
        
        
        vector<vector<int>> dp(s.length()+1, vector<int>(s.length()+1, -1));
        
        return solve(s, 0, s.length(), st, dp);
        
    }
};