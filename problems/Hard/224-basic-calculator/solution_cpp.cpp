class Solution {
public:
int calculate(string s) {

    string postfix;
    stack<char> st;
    
    for(auto i : s)
    {
        if(i == ' ')
            continue;
        else if(i == '+' || i == '-' || i == '(')
        {
            if(postfix.size() > 0 && isdigit(postfix[postfix.size() - 1]))
                postfix += '!';
            
            if(!st.empty() && st.top() != '(' &&  i != '(')
                postfix += st.top(), st.pop();
            st.push(i);
        }
            
        else if(isdigit(i))
            postfix += i;
        else 
        {
            if(postfix.size() > 0 && isdigit(postfix[postfix.size() - 1]))
                postfix += '!';
                
            while(st.top() != '(')
                postfix += st.top(), st.pop();
            st.pop();
        }
    }
    
    if(postfix.size() > 0 && isdigit(postfix[postfix.size() - 1]))
        postfix += '!';
    
    while(!st.empty())
        postfix += st.top(), st.pop();
    
    // cout<<postfix<<endl;
    
    stack<int> st2;
    long tmp = 0;
    
    for(auto i : postfix)
    {
        if(i >= '0' && i <= '9')
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
            else 
                st2.top() -=a;
        }
        
    }
    
    return st2.top();        
}
};