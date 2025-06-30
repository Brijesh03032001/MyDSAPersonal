class Solution {
public:
    bool isCircularSentence(string text) {
        stringstream ss(text);
        string word, prev;
        int i = 0;
        char first_cha;
        
        while (ss >> word) {
            if (i == 0) {
                first_cha = word[0];  // Store the first character of the first word
            } else {
                // Check if the first character of the current word matches the last character of the previous word
                if (word[0] != prev[prev.size() - 1]) {
                    return false;
                }
            }
            prev = word;
            i++;
        }
        
        // Finally, check if the last character of the last word matches the first character of the first word
        return first_cha == prev[prev.size() - 1];
    }
};
