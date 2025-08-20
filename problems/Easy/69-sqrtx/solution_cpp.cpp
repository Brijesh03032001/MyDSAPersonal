class Solution {
public:
    int mySqrt(int x) {
        int lo=0;
        int high = x;
        int ans = -1;
        while(lo<=high)
        {
            long long int mid = lo + (high-lo)/2;
            if(mid*mid > x)
            {
                high = mid-1;
            }
            else
            {
                lo= mid +1 ;
                ans = mid;
            }
        }
        return ans;
    }
};