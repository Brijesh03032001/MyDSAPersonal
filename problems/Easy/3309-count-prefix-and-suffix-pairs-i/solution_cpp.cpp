class Solution {
public:
    bool isPrefix(string a, string b)
    {
        if(a.size() > b.size())
        {
            return false;
        }
        if(a==b) return true;
        if(b.find(a) == 0)
        {
            return true;
        }
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int c = 0;
        for (int i = 0; i < words.size() - 1; i++) {

            string a = words[i];  
            for (int j = i + 1; j < words.size(); j++) {
                string b = words[j];
                string ori = b;
                string ori_a = a;
                reverse(a.begin(), a.end());
                reverse(b.begin(), b.end());
                cout << a <<"((( "<< b << "&&& " << ori_a << "***" << ori <<"\n";
                if (isPrefix(ori_a, ori) && isPrefix(a, b)) {
                    c++;
                }
                reverse(a.begin(), a.end());
            }
        }

        return c;
    }
};