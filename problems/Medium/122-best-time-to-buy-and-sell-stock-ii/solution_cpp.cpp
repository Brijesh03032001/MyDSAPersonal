class Solution {
public:
    int dp[30001][2];
    int sol(vector<int>&prices, int ind, int si, int buy)
    {
        if(ind >= si) return 0;
         
        if( dp[ind][buy] != -1)
        {
            return  dp[ind][buy];
        }
        if( buy == 1) 
        {


        int buy_kr_liya = -prices[ind] + sol(prices, ind+1, si, 0);
        int nhi_buy_kiya = sol(prices, ind+1, si, 1);
        return dp[ind][buy] = max(buy_kr_liya,nhi_buy_kiya );
        }
        if(buy == 0)
        {
            // we are selling
            int sell_kr_liya = +prices[ind] + sol(prices, ind+1 , si, 1);
            int nhi_sell_kiya = sol(prices, ind+1, si, 0);
            return   dp[ind][buy] = max(sell_kr_liya, nhi_sell_kiya);
        }
        return 0;

    }
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        // 1 is for buy , 0 is for sell
        memset(dp, -1 , sizeof(dp));
       return ans = sol(prices, 0, prices.size(), 1);
    }
};


// ans1 = 2nd day (sell1) - buy1
// ans2 = sell2 - buy2 

// therefore jb buy hoga toh -arr[i] to the answer
// otherwise +arr[i] to the answer

