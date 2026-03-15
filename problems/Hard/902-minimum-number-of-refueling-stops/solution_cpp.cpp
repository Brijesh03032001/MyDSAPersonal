class Solution {
public:
    
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        int curr= startFuel;
        int ans=0;
        priority_queue<int> pq;
        for(int i=0;i<stations.size();i++)
     {
            
            int nf= stations[i][1];
            
            int np= stations[i][0];
            
            while(curr<np)
            {
                if(pq.empty())
                {
                    return -1;
                }
                int t= pq.top();
                pq.pop();
                curr+=t;
                ans++;
                
            }
            pq.push(nf);
        }
         while(curr<target)
            {
                if(pq.empty())
                {
                    return -1;
                }
                int t= pq.top();
                pq.pop();
                curr+=t;
                ans++;
                
            }
        return ans;
    }
};