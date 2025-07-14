class Solution {
public:
    int maximumSwap(int num) {
        int ms = -1;
        int s1 = -1;
        int s2 = -1;
        string s = to_string(num);
        for(int i=s.size()-1;i>=0;i--)
        {
             if(ms == -1 || s[i] > s[ms])
             { 
                    ms = i;
             }
             else if(s[i] < s[ms])
             {
                  s1 = i;
                  s2 = ms;
             }
        }
        if(s1!= -1 && s2 != -1)
        {
            swap(s[s1], s[s2]);
        }
        int ans = stoi(s);
        return ans;
    }
};