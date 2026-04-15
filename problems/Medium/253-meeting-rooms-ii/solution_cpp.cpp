class Solution {
public:

    int minMeetingRooms(vector<vector<int>>& intervals) {
       if(intervals.size() == 0) return 0;
       sort(intervals.begin(), intervals.end());
      int cnt = 1;
      priority_queue<int, vector<int>, std::greater<int>> pq;
      pq.push(intervals[0][1]);
    for(int i = 1; i < intervals.size(); ++i){
        if(pq.top() <= intervals[i][0])
            pq.pop();
        pq.push(intervals[i][1]);
        // cnt = max(cnt, (int)pq.size());
       }
return pq.size();
    }
};