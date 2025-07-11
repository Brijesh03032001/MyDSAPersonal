class Solution {
public:
    char compute( char pre , vector<char> vc)
    {
        int n = vc.size();
        int count_for_true = 0;
        int count_for_false = 0;

        for(int i=0;i<n;i++)
        { 
            if(vc[i]== 't')
            {
                count_for_true ++;
            } 
            if(vc[i]== 'f')
            {
                count_for_false ++;
            } 
        }

        if(pre == '|' && count_for_true>=1)
        {
            return 't';
        }
        else if(pre == '|' && count_for_true==0)
        {
                return 'f';
        }
        else if(pre == '&' && count_for_false>=1)
        {
            return 'f';
        }
        else if(pre == '&' && count_for_false == 0)
        {
            return 't';
        }
        return 'f';
    }
    bool parseBoolExpr(string exp) {
        int n = exp.size();
        stack<char>st;

        for(int i =0; i<n;i++)
        {
            if(exp[i] == 't' || exp[i] == 'f' || exp[i]=='!' || exp[i] == '&' || exp[i]== '|' || exp[i] == '(')
            {
                st.push(exp[i]);
                // cout<<exp[i] << "\n";
            }
            else if(exp[i] == ')')
            {
                vector<char>vc;
                
                while(st.top() != '(')
                {
                    //  cout<< st.top() << "\n";
                     vc.push_back(st.top());
                     st.pop();
                     
                }
                // cout<<st.top();
                st.pop();
                char pre = st.top();
                if(pre == '&' || pre == '|')
                {
                char ans = compute(pre, vc);
                cout<< ans << "\n";
                st.push(ans);
                }
                else if(pre == '!')
                {
                    if(vc[0]=='t') st.push('f');
                    if(vc[0] == 'f') st.push('t');
                }
            }
        }
        if(st.top() == 't') return true;
        return false;
    }
};