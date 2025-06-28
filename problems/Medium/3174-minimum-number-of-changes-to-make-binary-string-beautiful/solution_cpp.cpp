class Solution {
public:
    int minChanges(string s) {
        int te = 0;
        for (int i = 0; i < s.size() - 1; i += 2) {
            if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')) {
                te++;
            }
        }
        return te;
    }
};
