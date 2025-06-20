class Solution {
public:
    bool valid(int ans, vector<int>& quantities , int shops)
    {
        for(int i=0;i<quantities.size();i++)
        {
            int ref = quantities[i];
            // shops -= (ceil((double(ref)/ans)));
            shops -= (ref + ans - 1) / ans ;

            if(shops < 0)
            {
                return false;
            }
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
         //binary search on answer
         int low = 1;
         int ans = 0;
         int high = *max_element(quantities.begin(), quantities.end());
         while(low<=high)
         {
            int mid = low + (high - low) / 2;
            if(valid(mid, quantities, n))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid + 1;
            }
         }
         return ans;
    }
};