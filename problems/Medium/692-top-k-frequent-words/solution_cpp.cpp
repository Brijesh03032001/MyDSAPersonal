class Solution {
public:
    struct comP{
        bool operator()(pair<int,string> &a, pair<int,string>&b)
        {
            if(a.first == b.first)
            {
                 return a.second > b.second;
            }
            return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        int n =words.size();
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        
        vector<pair<int,string>>vc;
        for(auto it : mp)
        {
            vc.push_back({it.second, it.first});

        }
        priority_queue<pair<int,string>, vector<pair<int,string>>, comP> pq(vc.begin(), vc.end());
        vector<string>res;
        while (k > 0 && !pq.empty())
        {

        
          
             
                  pair<int,string> tem = pq.top();
                  pq.pop();
                  res.push_back(tem.second);
              
             
              k--;

        } 
        return res;
    }
};