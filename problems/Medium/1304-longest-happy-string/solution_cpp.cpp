class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if (a>0) pq.push({a,'a'});
        if (b>0) pq.push({b,'b'});
        if (c>0) pq.push({c,'c'});
        string res ="";
        while(!pq.empty())
        {
            pair<int,char> top_ele = pq.top();
            int count = top_ele.first;
            char chr = top_ele.second;
            pq.pop();
            if (res.size()>=2 && (res[res.size()-1]== chr) && (res[res.size()-2] == chr))
            {
                   cout<< "entered when character is " << chr <<"\n";
                    if(pq.empty()) return res;
                    pair<int,char> second_top_ele = pq.top();
                    int count2 = second_top_ele.first;
                    char chr2 = second_top_ele.second;
                    pq.pop();
                    res += chr2;
                    count2--;
                    if (count2>0) pq.push({count2,chr2});
                
            }
            
                res += chr;
                count--;
            
            if (count>0) pq.push({count,chr});
        }
       return res;
    }
};