class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int l=1;
        int h = min((long long)x, (long long)pow(x, 1.0/2) + 2);
        int ans = -1;
        while(l <= h)
        {
            long long mid = l + (h-l)/2;
            if( mid * mid <= x)
            {
                   ans = mid;
                   l = mid + 1;
            }
            else
            {
                h = mid -1;
            }
        }
        return ans;
    }
};