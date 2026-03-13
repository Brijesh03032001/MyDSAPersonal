class MyCalendar {
public:
    
    vector<pair<int,int>>p;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        if(p.size()==0)
        {
            p.push_back({start,end});
            return true;
        }
        //int flg=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i].first>=end || p[i].second<=start)
            {
                
                continue;
            }
            else
            {
                return false;
            }
        }
        
          p.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */