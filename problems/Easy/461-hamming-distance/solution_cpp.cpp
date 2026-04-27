class Solution {
public:
    int hammingDistance(int x, int y) {
        int re=x^y;
        int c=0;
        while(re)
        {
            c=c+1;
            re=re&(re-1);
        }
        return c;
    }
};