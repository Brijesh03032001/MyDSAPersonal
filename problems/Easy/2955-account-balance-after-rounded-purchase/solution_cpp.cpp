class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        
        int a= purchaseAmount/10;
        int re= purchaseAmount%10;
        int ref = 10-re;
        if(ref>re) return (100- (10*(a)));
        return 100 - (10*(a+1));
        
    }
};