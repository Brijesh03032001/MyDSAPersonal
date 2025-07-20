class Solution {
public:
    vector<string> tok(string s){
        stringstream check1(s);
        string intermediate;
        vector<string>token;
        while(getline(check1, intermediate, ' '))
        {
            token.push_back(intermediate);
        }
        reverse(token.begin(), token.end());
        return token;
    }
    string reverseWords(string s) {
        s.erase(s.begin() , find_if(s.begin(), s.end(), bind1st(not_equal_to<char>(), ' ')));
        s.erase(find_if(s.rbegin(), s.rend(), bind1st(not_equal_to<char>(), ' ')).base(), s.end());
        s = regex_replace(s, std::regex(" +"), " ");
        vector<string>token = tok(s);
        string res="";
        for(auto it : token)
        {
            res+= it + " ";
        }
        res.erase(res.end()-1,res.end());
        return res;
        

    }
};