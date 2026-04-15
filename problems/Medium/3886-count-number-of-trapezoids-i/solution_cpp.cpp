class Solution {
public:
    const int mod = 1e9 + 7;
    static bool com(const vector<int>& a, const vector<int>& b)
{
    // This sorts in ASCENDING order (smallest to largest)
    return a[1] < b[1];

    /* // If you wanted DESCENDING order, you would use >
    // return a[1] > b[1];
    */
}
    int countTrapezoids(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), com);
         unordered_map<int,int>mp;
         for(int i=0;i<points.size();i++)
         {
            // cout << points[i][0] << " " << points[i][1] << "\n";
            mp[points[i][1]]++;
         }
         vector<int>vc;
         long long su = 0;
         for(auto it : mp)
         {
            if(it.second > 1)
            {
                long long n = it.second;
long long cal;

if (n % 2 == 0) {
    
    long long term1 = (n / 2) % mod;
    long long term2 = (n - 1) % mod;
    cal = (term1 * term2) % mod;
} else {
    
    long long term1 = n % mod;
    long long term2 = ((n - 1) / 2) % mod;
    cal = (term1 * term2) % mod;
}


cal = (cal + mod) % mod;
            vc.push_back(cal);
            su+= cal;

            }
         }
         long long res =0;
         for(int i=0;i<vc.size();i++)
         {
            su = su - vc[i];
            res = (res%mod + ((((vc[i] % mod) * (su % mod)) % mod)%mod) )%mod;
         }
         return res;
    }
};