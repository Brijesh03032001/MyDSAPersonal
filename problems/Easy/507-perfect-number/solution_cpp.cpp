class Solution {
public:
    bool checkPerfectNumber(int num) {
        int su=0;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                su=su+i;
                    su=su+(num/i);
            }
        }
        su=su+1;
        if(num==1)
        {
            return false;
        }
        if(su==num)
        {
            return true;
        }
        return false;
    }
};