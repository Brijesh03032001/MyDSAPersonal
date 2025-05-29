class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<cards.size();i++)
        {
        
                mp[cards[i]].push_back(i);
            
        }

        int ans = INT_MAX;
        for(auto it : mp)
        {
            vector<int> ref = it.second;
            int n  = ref.size();
            if(n>1)
            {
                for(int j=1;j<n;j++)
                {
                    ans = min(ans, ref[j]- ref[j-1] );
                }
            }
        }

        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans+1;
    }
};