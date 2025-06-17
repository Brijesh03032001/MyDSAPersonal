class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        
        if (k == 0) {
            return res; // All elements are zero when k is zero
        }
        
        int start = (k > 0) ? 1 : n + k; // Start index for summation
        int end = (k > 0) ? k : n - 1;  // End index for summation
        
        // Compute initial sum for the first window
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += code[i % n];
        }
        
        for (int i = 0; i < n; i++) {
            res[i] = sum;
            // Slide the window
            sum -= code[(start++) % n];
            sum += code[(++end) % n];
        }
        
        return res;
    }
};
