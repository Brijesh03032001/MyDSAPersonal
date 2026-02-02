class Solution {
public:
   int ans(vector<int>&prices , int ind , int b,vector<vector<int>>&vc , int f)
   {
     
     if(ind==prices.size())
     {
       return 0;
     }
     if(vc[ind][b]!=-1)
       
     {
       return vc[ind][b];
     }
     int pro=0;
     
     if(b)
     {
       int l1= -prices[ind]  + ans(prices,ind+1,0,vc,f);
       int l2= ans(prices, ind+1, 1,vc,f);
       pro= max(l1,l2);
     }
     else
     {
       int l1= prices[ind]  -f + ans(prices,ind+1,1,vc,f);
       int l2= ans(prices, ind+1, 0,vc,f);
       pro= max(l1,l2);
     }
     return vc[ind][b]=pro;
   }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>vc(prices.size()+1 , vector<int>(2,-1));
        return ans(prices,0,1,vc,fee);
      
    }
};