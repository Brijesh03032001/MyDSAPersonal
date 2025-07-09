class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = std::regex_replace(s, std::regex("[^a-zA-Z0-9]"), "");
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s2==s1)
        {
            return true;
        }
        cout<< s1;
        return false;
    }
};