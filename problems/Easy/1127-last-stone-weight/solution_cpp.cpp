class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n= stones.size();
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size())
        {
            int a1 = pq.top();
            if(pq.size()==1 ) return a1;
            pq.pop();
            
            int a2= 0;
            int flag = 0;
            if(pq.size()>0)
            {
            a2 = pq.top();
            pq.pop();
            flag = 1;
            }
            if(a1-a2 != 0 && flag==1)
            {
               pq.push(a1-a2);
            }
            
 
        }
        return 0;
    }
};