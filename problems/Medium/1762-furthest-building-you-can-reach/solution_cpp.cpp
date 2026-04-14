class Solution {
public:
    int furthestBuilding(vector<int>& heights, int brick, int ladders) {
        
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < heights.size() - 1; i++)
        {
            if(heights[i] >= heights[i+1])
                continue;

            int di = heights[i+1] - heights[i];

            // ✅ FIX 1: correct condition
            if(pq.size() < ladders)
            {
                pq.push(di);
            }
            else
            {
                // ✅ FIX 2: safe use of pq.top()
                if(!pq.empty() && di > pq.top())
                {
                    brick -= pq.top();
                    pq.pop();
                    pq.push(di);
                }
                else
                {
                    brick -= di;
                }

                // ✅ FIX 3: only check brick < 0
                if(brick < 0)
                {
                    return i;
                }
            }
        }

        // ✅ FIX 4: return last index
        return heights.size() - 1;
    }
};