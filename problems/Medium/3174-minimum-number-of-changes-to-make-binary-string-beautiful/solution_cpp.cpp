class Solution {
public:
    int minChanges(string s) {
        int te=0;
        for(int i=0;i<s.size()-1;i+=2)
        {
            char c1= s[i];
            char c2 = s[i+1];
            string s1 = "";
            s1+=c1;
            s1+=c2;
            if(s1 == "01" || s1=="10")
            {
                te++;
            }
        }
        return te;
    }
};