class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n = tokens.size();
        for(int i=0;i<n;i++)
        {
            if(st.empty() && ( tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" && tokens[i] != "/") )
            {
                 st.push(stoi(tokens[i]));

            }
            else if (( tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" && tokens[i] != "/") )
            {
                st.push(stoi(tokens[i]));
            }
            else
            {
                 int first =  st.top();
                 st.pop();
                 int second = st.top();
                 st.pop();
                 if(tokens[i] == "+")
                 {
                     st.push(first + second);
                 } 
                 else if(tokens[i] == "-")
                 {
                     st.push(second - first);
                 } 
                 else if(tokens[i] == "*")
                 {
                     st.push(first * second);
                 } 
                 else if(tokens[i] == "/")
                 {
                     st.push(second / first );
                 } 
            }
        }
        return st.top();
    }
};