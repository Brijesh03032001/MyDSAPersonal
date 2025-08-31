class Solution {
public:
    int val(char ch)
    {
        if(ch== 'I') return 1;
        if(ch== 'V') return 5;
        if(ch== 'X') return 10;
        if(ch== 'L') return 50;
        if(ch== 'C') return 100;
        if(ch== 'D') return 500;
        if(ch== 'M') return 1000;
        return -1;
    }
    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            int s1 = val(s[i]);
            if(i + 1 < s.size())
            {
                int s2 = val(s[i+1]);
                if(s2<= s1)
                {
                    res += s1;
                    
                }
                else
                {
                    res += s2-s1;
                    i++;
                }
               
            }
            else
            {
                res = res + s1;
            }
        }
        return res;
    }
};