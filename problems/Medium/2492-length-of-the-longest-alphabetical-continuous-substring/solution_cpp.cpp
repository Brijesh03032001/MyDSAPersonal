class Solution {
public:
    int longestContinuousSubstring(string s) {
        int te = 1, ans = 1;  // te = current streak, ans = max streak
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1] + 1) {  // Check for consecutive alphabetical order
                te++;  // Increase streak
            } else {
                ans = max(ans, te);  // Update max length
                te = 1;  // Reset streak
            }
        }
        return max(ans, te);  // Ensure final update
    }
};
