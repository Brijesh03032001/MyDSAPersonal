class Solution {
public:
   
    bool judgeSquareSum(int c) {
        
        for(long long int i=0;i*i<=(c);i++)
        {
            cout<<sqrt(c-(i*i))<<" ";
            if(sqrt(c-(i*i))- (int)sqrt(c-(i*i))==0)
            {
                return true;
            }
            
        }
        return false;
    }
};