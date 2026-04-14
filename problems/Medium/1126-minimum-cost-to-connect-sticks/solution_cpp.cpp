class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int, vector<int> , greater<int>>pq(sticks.begin(), sticks.end());
        int su = 0;
        while(!pq.empty())
        {
            int first = pq.top();
            pq.pop();
            if(pq.empty())
            {
                return su;
            }
            else
            {
                int second = pq.top();
                pq.pop();
                su += ( first + second);
                pq.push(first+second);
            }
        }

        return su;
        
    }
};