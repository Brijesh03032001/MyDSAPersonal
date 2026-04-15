class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            if( ch == '{' || ch == '[' || ch == '(')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty()) return false;
                char to = st.top();
                if ( (ch == '}' && to == '{') ||
                     (ch == ']' && to == '[') ||
                     (ch == ')' && to == '(') )
                {
                       st.pop();
                } 
                else
                {
                    return false;
                }
            }
        }
        if(!st.empty())
        {
            return false;
        }
        return true;
    }
};