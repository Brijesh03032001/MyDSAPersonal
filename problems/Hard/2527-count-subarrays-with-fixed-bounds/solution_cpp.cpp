class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long min_k_pos = -1;
        long long max_k_pos = -1;
        long long cul_pos = -1;

        /*
        Common step :

        smaller = min(min_k_pos, max_k_pos);
        te = smaller - cul_pos ;
        if( te > 0)
        {
        ans += (smaller - cul_pos)

        }
        else
        {
            ans += 0;
        }

         */

        int n = nums.size();
        long long ans =0;
        for(int i=0;i< n; i++)
        {
            int ref = nums[i];
            
            // define min_k
            if(ref == minK) min_k_pos = i;
            //define max_k
            if(ref == maxK) max_k_pos = i;
            //define culprit_pos
            if((ref < minK) || (ref> maxK)) cul_pos = i;
            long long smaller = min(min_k_pos, max_k_pos);
            long long te = smaller - cul_pos ;
        if( te > 0)
        {
        ans += (smaller - cul_pos);

        }
        else
        {
            ans += 0;
        }          

        }
        return ans; 
    }
};