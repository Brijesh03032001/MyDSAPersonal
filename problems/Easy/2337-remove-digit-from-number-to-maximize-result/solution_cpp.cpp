class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        int c = 0;
        int ind = -1;
        for(int i=0;i<n;i++)
        {
           if(number[i] == digit)
           {
            c++;
            ind = i;
           }
        }
        if(c==1)
        {
            string ans = number.substr(0,ind);
            ans+= number.substr(ind+1,n);
            return ans;
        }
        else
        {
            int n_ind = -1;
            for(int i=0;i<n;i++)
            { 
                 if(number[i] == digit)
                 {
                    if(i==n-1)
                    {
                          return number.substr(0,i);
                    }
                    else
                    {
                        if(number[i+1] > number[i])
                        {
                            string ans = number.substr(0,i);
                            ans+= number.substr(i+1, n);
                            return ans;
                        }
                       
                    }
                    n_ind = i;
                 } 
            }
            string res = number.substr(0,n_ind);
            res+= number.substr(n_ind+1, n);
            return res;
        }
        return "s";
    }
};