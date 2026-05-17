class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        
        long long ref_su = 0;
        long long temp_su = 0;
        long long original_su =0;
        int n= prices.size();
        for(int i=0;i<n;i++)
        {
            if(i>=k)
            {
                ref_su += (prices[i]*strategy[i]);
            }

            original_su += (prices[i]*strategy[i]);
        }
        
        for(int i=k/2;i<k;i++)
        {
            temp_su += prices[i];
        }

        int te = 0 + (k/2) - 1;
       
        long long su_till_now =0;
        su_till_now += ref_su;
        su_till_now += temp_su;
        original_su = max(original_su, su_till_now );
        // cout << original_su <<" ***";
        // if(n<=2) return original_su;
         for(int i=1;i<(n - (k) + 1);i++)
        {
            te = i + (k/2) - 1;
            su_till_now += prices[i+ k - 1];
            su_till_now -= ((long long)prices[i + k - 1] *
                (long long)strategy[i + k - 1]);
            su_till_now += ((long long)prices[i - 1] *
                (long long)strategy[i  - 1]);
            
            su_till_now -= prices[te];
            // cout << su_till_now << "***";
            original_su = max(original_su, su_till_now );
        }

        return original_su;
        

    }
};