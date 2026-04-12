class Solution {
public:
    int minSteps(int n) {
        vector<int> sieve(n + 2, n);
        sieve[1] = 0;
        sieve[2] = 2;
        
        for(int i = 3; i <= n/2; ++i) {
            sieve[i] = min(sieve[i], i);
            
            int additionalCopyPastes = 2;
            
            for(int j = i + i; j <= n; j += i) {
                sieve[j] = min(sieve[j], sieve[i] + additionalCopyPastes);
                
                additionalCopyPastes += 1;
            }
        }
        
        return sieve[n];
    }
};