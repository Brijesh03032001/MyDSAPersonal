class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        stringstream ss(text);
        string word, prev, prevPrev;
        
        while (ss >> word) {
            if (prevPrev == first && prev == second) {
                res.push_back(word);
            }
            prevPrev = prev;
            prev = word;
        }
        
        return res;
    }
};
