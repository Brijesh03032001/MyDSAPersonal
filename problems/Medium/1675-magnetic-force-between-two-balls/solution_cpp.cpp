class Solution {
public:
   bool can_place(int mid,
                   vector<int>& position,
                   int m)
    {
        int count = 1;

        int last = position[0];

        for(int i = 1; i < position.size(); i++)
        {
            if(position[i] - last >= mid)
            {
                count++;

                last = position[i];
            }

            if(count >= m)
            {
                return true;
            }
        }

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