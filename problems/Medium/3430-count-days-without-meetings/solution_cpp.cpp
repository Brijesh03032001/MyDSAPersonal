class Solution {
public:
    vector<vector<int>>mer(vector<vector<int>>meetings)
    {
            if (meetings.empty()) return {};
        
        sort(meetings.begin(), meetings.end()); // Sort by start time
        
        vector<vector<int>> merged;
        merged.push_back(meetings[0]); // Start with the first interval
        
        for (int i = 1; i < meetings.size(); i++) {
            vector<int>& last = merged.back(); // Get last merged interval
            
            if (last[1] >= meetings[i][0]) { // Overlapping case
                last[1] = max(last[1], meetings[i][1]); // Merge intervals
            } else {
                merged.push_back(meetings[i]); // No overlap, add as new interval
            }
        }
        return merged;
    }
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> ref = mer(meetings);
        long long co =0;
        for(int i=1;i<ref.size();i++)
        {
            long long te = ref[i][0]- ref[i-1][1] -1;
            cout << te;
            co+= te;
        }
        co+= days - ref[ref.size()-1][1];
        co+= (ref[0][0] - 1);
        return co;

    }
};