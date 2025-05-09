class Solution {
public:
    int longestContinuousSubstring(string s) {
        int te = 1;  // Stores the current length of the alphabetical substring
        int ans = 1; // Stores the maximum length found
        int pre = s[0] - 'a'; // Convert first character to its zero-based index

        for (int i = 1; i < s.size(); i++) {
            if (pre + 1 == (s[i] - 'a')) { // Check if current char is next in sequence
                te++;
            } else {
                ans = max(ans, te); // Update max length if sequence breaks
                te = 1; // Reset count for new sequence
            }
            pre = s[i] - 'a'; // Update previous character
        }

        ans = max(ans, te); // Final update for the last sequence
        return ans;
    }
};
