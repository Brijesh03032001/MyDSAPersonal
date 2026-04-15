class Solution {
public:
    // Helper function to check if a string has unique characters
    bool hasUniqueChars(const string& s) {
        unordered_set<char> charSet;
        for (char c : s) {
            if (charSet.count(c)) {
                return false; // Found a duplicate
            }
            charSet.insert(c);
        }
        return true;
    }

    // The main recursive backtracking function
    // The unordered_set is passed by reference (&) to avoid copies and enable backtracking
    int solve(int ind, const vector<string>& arr, unordered_set<char>& charSet) {
        // Base case: we've considered all strings
        if (ind >= arr.size()) {
            return 0;
        }

        // --- Path 1: Exclude the current string arr[ind] ---
        int excludeLength = solve(ind + 1, arr, charSet);

        // --- Path 2: Try to include the current string arr[ind] ---
        const string& currentStr = arr[ind];
        bool hasConflict = false;
        
        // Check if any character in the current string is already in our set
        for (char c : currentStr) {
            if (charSet.count(c)) {
                hasConflict = true;
                break;
            }
        }

        int includeLength = 0;
        // int excludeLength = 0;
        if (!hasConflict) {
            // Add all characters of the current string to the set
            for (char c : currentStr) {
                charSet.insert(c);
            }
            
            // Recurse for the next string
            includeLength = currentStr.length() + solve(ind + 1, arr, charSet);
            
            // Backtrack: remove the characters to explore other paths
            for (char c : currentStr) {
                charSet.erase(c);
            }
            
        }

        // Return the maximum of the two paths
        return max(includeLength, excludeLength);
    }

    int maxLength(vector<string>& arr) {
        // First, filter the input array to only keep strings with unique characters
        vector<string> uniqueArr ;
        int re = 0;
        for (const string& s : arr) {
            int le = s.size();
            
            if (hasUniqueChars(s)) {
                re = max(re, le);
                uniqueArr.push_back(s);
            }
        }
        
        unordered_set<char> charSet;

        int ans = solve(0, uniqueArr, charSet);
        return max(re, ans);
    }
};