class Solution {
public:
int sieve(int n) {
    
    // creation of boolean array
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
   int res =0;;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res ++;
        }
    }
    return res;
}

    int countPrimes(int n) {
        return sieve(n-1);
    }
};