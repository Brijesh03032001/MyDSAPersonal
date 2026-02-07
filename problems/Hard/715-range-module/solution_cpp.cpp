class RangeModule {
public:
    RangeModule() {
        
    }
    
    inline map<int,int>::iterator first_iter(int left) {
        
        // get first overlaping interval
        auto it = mp.lower_bound(left);
        if (it != mp.begin() && prev(it)-> second >= left){
            --it;
        }
        return it;
    }
    
    void addRange(int left, int right) {
        
        auto it = first_iter(left);
        // remove all overlaping intervals
        // update left  <- leftmost left boundary removed
        //        right <- rightmost right boundary removed
        while(it != mp.end() && it->first <= right) {
            left = min(left, it->first);
            right = max(right, it->second);
            mp.erase(it++);
        }
        // add back all the intervals
        mp.insert({left, right});
    }
    
    bool queryRange(int left, int right) {
        
        auto it = first_iter(left);
        if (it == mp.end()) return false;
        return it->first <= left && it->second >= right;
    }
    
    void removeRange(int left, int right) {
        
        auto it = first_iter(left);
        // v used to collect possible intervals that has partial overlap with [left, right)
        vector<pair<int,int>> v;
        // remove all overlapping intervals
        while (it != mp.end() && it->first < right) {
            // collect partially overlapped intervals
            // and update its left right borders
            if (it->first < left) {
                v.push_back({it->first, left});
            }
            if (it->second > right) {
                v.push_back({right, it->second});
            }
            mp.erase(it++);
        }
        // insert back partial intervals
        for (auto& p: v) {
            mp.insert(p);
        }
    }
    
    map<int,int> mp; // [beg, end)
};