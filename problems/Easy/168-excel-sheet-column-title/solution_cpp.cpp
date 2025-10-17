class Solution {
public:
    string convertToTitle(int n) 
    {
        string ans = "";
        while(n>0)
        {
            int temp = n%26;
            if(temp==0)
            {
                ans += 'Z';
                n /= 26;
                n--;
            }
            else
            {
                ans += (temp-1) + 'A';
                n /= 26;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
