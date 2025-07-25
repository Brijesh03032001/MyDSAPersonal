class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int su_gas = 0;
        int su_cost =0;
        int res = -1;
        for(int i=0;i<gas.size();i++)
        {
            su_gas += gas[i];
            su_cost += cost[i];
            
        }
        if(su_gas >= su_cost)
        {
              int curr_gas=0;
              int s_p = 0;
              for(int i=0;i<gas.size();i++)
              {
                  curr_gas += (gas[i]-cost[i]);
                  if( curr_gas < 0)
                  {
                       s_p= i+1;
                       curr_gas=0;
                  }
            
              }
              return s_p;
        }
       return -1;
    }
};