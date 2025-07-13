class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
          long long not_consider_power = 0;

          int n = customers.size();
          if(n==1)
          {
            return customers[0];

          }
          int j=0;
          long long window_sum = 0;
          for(int i=0;i<n;i++)
          {
            if(j<minutes)
            {
                if(grumpy[j]== 1)
                {
                window_sum += customers[j];

                }
                j++;
            }
            if(grumpy[i] == 0)
            {
                not_consider_power += customers[i];
            }
          }
          not_consider_power += window_sum;
          int ans = not_consider_power;
          for(int i=1;i<n-minutes+1;i++)
          {
             if(grumpy[i-1]==1)
             {
                  not_consider_power = not_consider_power - customers[i-1];

             }
             if(grumpy[i+minutes-1]==1)
             {
                   not_consider_power = not_consider_power + customers[i+minutes-1];
             }
             if(ans < not_consider_power)
             {
                ans = not_consider_power;
             }
             
          }
          return ans;
    }
};