class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_set<int>st;
        int n = fruits.size();
        int p1 = 0, p2 = 0;
        int le = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
        while(p2< n)
        {
            if(st.find(fruits[p2]) == st.end())
            {
                // unique mila
                if(pq.size() == 2)
                {
                    pair<int,int> top_ele = pq.top();
                    pq.pop();
                    p1 = top_ele.first + 1;
                    st.erase(top_ele.second);
                    // pq.push({p2, fruits[i]});
                }
                pq.push({p2, fruits[p2]});
                st.insert( fruits[p2]);
            }
            else
            {
                vector<pair<int,int>> temp;
                while(!pq.empty() && pq.top().second != fruits[p2])
                {
                    pair<int,int> top_ele = pq.top();
                    temp.push_back(top_ele);
                    pq.pop();
                }
                pq.pop();
                pq.push({p2, fruits[p2]});
                if(temp.size() != 0) pq.push(temp[0]);

                  
                   
                
               
                
            }

            le = max(le, p2-p1+1);
            p2++;
        }
        return le;
    }
};