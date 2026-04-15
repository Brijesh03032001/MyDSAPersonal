class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        long long right_part = 0;
        int n = prices.size();

        // base baad mein
        long long left_part = 0;
        long long mid_part = 0;
        int div = k/2;
        for(int i=k;i<n;i++)
            {
                right_part += (prices[i]*strategy[i]);
            }
        for(int i=div;i<k;i++)
            {
                mid_part += prices[i];
            }
        long long ref = 0;
        ref+= mid_part;
        ref+= right_part;
        ref+= left_part;
        
        for(int i=k;i<n;i++)
        {
              right_part -= (prices[i]*strategy[i]);
              mid_part += prices[i];
            mid_part -= prices[i-div];
            left_part = left_part + (prices[i-k]*strategy[i-k]);
            long long temp = right_part + mid_part +left_part ;
            if(temp> ref)
            {
                ref = temp;
            }
        }
        long long base_res =0;
        for(int i=0;i<n;i++)
            {
                base_res += (prices[i]*strategy[i]);
            }
        if(base_res > ref)
        {
            ref = base_res;
        }
        return ref;
        
    }
};