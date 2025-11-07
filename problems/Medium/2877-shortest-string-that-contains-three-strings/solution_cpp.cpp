class Solution {
public:
    string minimumString(string a, string b, string c) {
         string arr[] = { a, b, c };
        int n = sizeof(arr) / sizeof(arr[0]);
        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i != j && j != k && i != k) {
                        string s1 = merge(arr[i], arr[j]);
                        string s2 = merge(s1, arr[k]);
                        if (ans.empty()  || s2.length() < ans.length() || (s2.length() == ans.length() && s2 < ans)) {
                            ans = s2;
                        }
                    }
                }
            }
        }
        return ans;
    }
      string merge(string a, string b) {
        if (a.find(b) != string::npos) {
            return a;
        }
        for (int i = min(a.length(), b.length()); i >= 0; i--) {
            if (a.substr(a.length() - i) == b.substr(0, i)) {
                return a + b.substr(i);
            }
        }
        return a + b;
    }
};
