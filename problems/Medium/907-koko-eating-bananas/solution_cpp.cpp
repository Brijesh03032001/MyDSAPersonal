class Solution {
public:
    bool ableToEat(int speed, vector<int>&piles, int h)
    {
        long long ref_hour = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            ref_hour += ceil((double)piles[i] / speed);
        }
        return ref_hour <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int ans = hi;

        while(lo <= hi)
        {
            int mi = lo + (hi - lo)/2;

            if(ableToEat(mi, piles, h))
            {
                ans = mi;
                hi = mi - 1;
            }
            else
            {
                lo = mi + 1;
            }
        }
        return ans;
    }
};