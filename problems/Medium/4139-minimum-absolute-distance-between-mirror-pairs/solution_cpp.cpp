class Solution {
public:
    
    long long reverseInt(long long x) {
        long long r = 0;
        while (x > 0) {
            r = r * 10 + (x % 10);
            x /= 10;
        }
        return r;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        
        int ans = INT_MAX;

       
        unordered_map<long long, int> revse;
        revse.reserve(n * 2);

        for (int j = 0; j < n; ++j) {
            
            auto it = revse.find(nums[j]);
            if (it != revse.end()) {
                int i = it->second;      
                ans = min(ans, j - i);
                if (ans == 1) return 1;    
            }

           
            long long rev_j = reverseInt(nums[j]);
            
            revse[rev_j] = j;
        }

        return (ans == INT_MAX ? -1 : ans);
    }
};