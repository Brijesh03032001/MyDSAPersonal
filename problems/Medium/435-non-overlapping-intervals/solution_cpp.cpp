class Solution {
public:
    static bool com(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];  // Sort by end time in ascending order (Greedy approach)
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;  // Handle empty case

        sort(intervals.begin(), intervals.end(), com);  // Sorting using the static comparator
        
        int end = intervals[0][1];
        int count = 0;

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < end) {  
                count++;  // Overlapping interval found, remove it
            } else {
                end = intervals[i][1];  // Update end time for the next comparison
            }
        }
        return count;
    }
};
