class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;

        for(char ch : s) {
            mp[ch]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto &it : mp) {
            pq.push({it.second, it.first});
        }

        int n = 1;
        string ans = "";

        while(!pq.empty()) {

            // ✅ EARLY FAILURE CHECK (added)
            if(pq.size() == 1 && pq.top().first > 1)
                return "";

            vector<pair<int,char>> temp;
            int c = 0;

            while(!pq.empty() && c < n+1) {
                auto ref = pq.top();
                pq.pop();

                ans += ref.second;
                ref.first--;

                if(ref.first > 0)
                    temp.push_back(ref);

                c++;
            }

            // ❌ remove this (no longer needed)
            // if(!pq.empty() && c < n+1)
            //     return "";

            for(auto &it : temp)
                pq.push(it);
        }

        return ans;
    }
};