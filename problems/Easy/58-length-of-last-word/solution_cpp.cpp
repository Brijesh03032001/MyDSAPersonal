class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(find_if(s.rbegin(),s.rend(),bind1st(not_equal_to<char>(),' ')).base(),  
                  s.end());
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                cout<<i;
                return n-i-1;
            }
        }
        return n;
    }
};