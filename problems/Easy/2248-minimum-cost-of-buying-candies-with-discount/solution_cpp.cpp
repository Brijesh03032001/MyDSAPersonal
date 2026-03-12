class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        
        sort(cost.begin(),cost.end(),greater<int>());
        int le=cost.size();
        if(le==1)
        {
            return cost[0];
        }
        if(le==2)
        {
            return cost[0]+cost[1];
            
        }
        int su=0;
        for(int i=0;i<le;i+=3)
        {
            su+=cost[i];
           if(i+1 < le)
           {
               su+=cost[i+1];
           }
            
           
        }
        
        return su;
        
        
        
    }
};