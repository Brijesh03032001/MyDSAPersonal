class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int L=0;
        int i=1;
        int n = intervals.size();
        if(n == 1) return 0;
        int c = 0; // count of overlapping intervals
        while(i<n)
        {
            // safe condition
            if(intervals[L][1] <= intervals[i][0])
            {
                L=i;
                i++;
            }
            else
            {
                if(intervals[L][1] <= intervals[i][1])
                {
                    
                    i++;
                }
                else
                {
                   
                    L = i;
                    i++;
                }
                c++;
            }
        }
        return c;
    }
};