class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
      priority_queue <int, vector<int>, greater<int>> pq1;
      priority_queue <int, vector<int>, greater<int>> pq2;
      long long ans=0;
      int n= costs.size();
      int nh = candidates;
      int nt = n-1-candidates;
      for(int i=0;i<candidates;i++)
      {
         pq1.push(costs[i]);
      } 
      for(int i=max(candidates, n- candidates );i<n;i++)
      {
        pq2.push(costs[i]);
      }
      for(int i=0;i<k;i++)
      {
          if(pq2.empty() || (!pq1.empty() && pq1.top() <= pq2.top()) )
          {
             ans+= pq1.top();
             pq1.pop();
             if(nh<=nt)
             {
                pq1.push(costs[nh]); 
                nh++;
             }
          }
          else
          {
              ans+=pq2.top();
             pq2.pop();
              if(nh<=nt)
              {
                pq2.push(costs[nt]);  
                nt--;
              } 
          }
      }
      return ans;
    }

};

