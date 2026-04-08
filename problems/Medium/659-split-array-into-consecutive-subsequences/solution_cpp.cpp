class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n = nums.size(), i, j;
        int mi = nums[0], ma = nums[n-1];
        
        // a queue is used to record the start of any contiguous array
        // a counting table is used to record the number of each integer from nums
        // each number is normalized between min(nums) to max(nums)
        queue<int> q;
        int count[ma - mi + 2];
        memset(count, 0, sizeof(count));
        
        for(i = 0; i < n; ++i) {
            count[nums[i] - mi]++;
        }
        
        int prev = 0, cur, start;
        for(i = 0; i < ma - mi + 2; ++i) {
            cur = count[i];
            if (cur > prev) {
                // if count of i is larger than count of i-1, then (table[i] - table[i-1]) starting points
                // should be push to the start queue
                for(j = 0; j < cur - prev; ++j) {
                    q.push(i); 
                }
            } else if (cur < prev) {
                // if count i is smaller than count of i, then (table[i-1] - table[i]) continuous array will
                // end at i-1. So we should pop (table[i-1] - table[i]) starting points from the queue and check
                // if the length of these array is larger than 3.
                for(j = 0; j < prev - cur; ++j) {
                    start = q.front();
                    q.pop();
                    if (i-start < 3) return false;
                }
            }
            // if count i is equal to count of i-1, then no need to erase or create new starting point.
            prev = cur;
        }
        
        return true;
        
    }
};