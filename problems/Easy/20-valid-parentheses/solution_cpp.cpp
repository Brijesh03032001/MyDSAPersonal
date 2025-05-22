class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char> mp{{']', '['} , {'}', '{'} , {')', '('}};

        for(int i=0;i<s.size();i++)
        {
                if(st.empty() || mp.find(s[i]) == mp.end())
                {
                       st.push(s[i]);
                }
                else if(st.top() == mp[s[i]])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }

        }
        if(!st.empty())
        {
            return false;
        }
                 return true;
    }
};