
class Solution {
public:

int precedence(char a)
{
    return (a == '+' || a == '-') ? 1 : 2;
}

int calculate(string s) {
    
    string postfix;
    stack<char> st;
    for(auto i : s)
    {
        if(isdigit(i))
            postfix += i;
        else if(i == '+' || i == '-' || i == '*' || i == '/')
        {
            if(postfix.size() && isdigit(postfix[postfix.size() - 1]))
                postfix += '!';
            
            while(!st.empty() && precedence(st.top()) >= precedence(i))
                postfix += st.top(), st.pop();
            
            st.push(i);
        }            
    }
    
    if(postfix.size() && isdigit(postfix[postfix.size() - 1]))
                postfix += '!';
    
    while(!st.empty())
        postfix += st.top(), st.pop();
    
    stack<int> st2;
    long tmp = 0;
    for(int i : postfix)
    {
        if(isdigit(i))
            tmp = tmp * 10 + i - '0';
        else if(i == '!')
            st2.push(tmp), tmp = 0;
        else
        {
            int a = st2.top();
            st2.pop();
            
            if(st2.empty())
                st2.push(0);
            
            if(i == '+')
                st2.top() += a;
            else if(i == '-')
                st2.top() -= a;
            else if(i == '*')
                st2.top() *= a;
            else if(i == '/')
                st2.top() /= a; 
        }
    }
    
    return st2.top();
}
};