class Solution {
public:
   long long nCr(int n, int r) {
    if (n < 0 || r < 0 || n < r) return 0;
    long long res = 1;
    for (int i = 1; i <= r; ++i) {
        res *= (n - r + i);
        res /= i;
    }
    return res;
}

long long distributeCandies(int n, int limit) {
    long long totalWays = nCr(n + 2, 2);

    long long subtract1 = 3 * nCr(n - (limit + 1) + 2, 2);
    long long add2 = 3 * nCr(n - 2 * (limit + 1) + 2, 2);
    long long subtract3 = nCr(n - 3 * (limit + 1) + 2, 2);

    long long result = totalWays - subtract1 + add2 - subtract3;
    return (result >= 0 ? result : 0); // ensure non-negative result
}
    
};