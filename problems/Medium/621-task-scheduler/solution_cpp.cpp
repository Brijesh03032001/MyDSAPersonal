class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;

        for(char t : tasks) {
            mp[t]++;
        }

        priority_queue<int> pq;
        for(auto &it : mp) {
            pq.push(it.second);
        }

        int ans = 0;

        while(!pq.empty()) {
            vector<int> temp;
            int c = 0;

            while(!pq.empty() && c < n+1) {
                int ref = pq.top();
                pq.pop();
                ref--;
                if(ref > 0) temp.push_back(ref);
                c++;
            }

            for(int x : temp) pq.push(x);

            if(pq.empty())
                ans += c;
            else
                ans += (n+1);
        }

        return ans;
    }
};