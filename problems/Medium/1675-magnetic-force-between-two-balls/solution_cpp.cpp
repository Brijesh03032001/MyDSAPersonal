class Solution {
public:
    bool can_place(int mid,vector<int>& position, int m )
    {
        int te = m-1;
        int n = position.size();
        int start = position[0];
        int i=1;
        while(i < n)
        {
            while(i < n && position[i] - start < mid)
            {
                i++;
            }

            if(i == n) break;

            te--;

            if(te == 0) return true;

            start = position[i];

            i++;
        }
        // if(te == 0) return true;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int lo = 1;
        int n = position.size();
        int ans = lo;
        if(n==2) return position[1] - position[0]; 
        int hi =position[n-1] - position[0] ;
        while(lo<=hi)
        {
            int mid = lo + (hi - lo) / 2;
            
            if(can_place(mid, position, m))
            {
                lo = mid+1;
                ans = max(ans,mid);
            }
            else
            {
                hi = mid - 1;
            }
        }
        return ans;
    }
};