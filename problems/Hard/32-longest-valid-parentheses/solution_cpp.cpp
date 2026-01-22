class Solution {
public:
    int longestValidParentheses(string s) {
       int op=0;
      int cl=0;
      int ma=0;
      int n= s.length();
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='(')
        {
          op++;
        }
        else
        {
          cl++;
        }
        
        if(op==cl)
        {
          int le= op + cl;
          ma=max(ma,le);
          
        }
        else if(cl>op)
        {
          op=0;
          cl=0;
        }
      }
      
      op=cl=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='(')
                op++;
            else
                cl++;
            
            if(op==cl)
                ma=max(ma,2*op);
            else if(cl<op)
                cl=op=0;
        }
      return ma;
    }
};