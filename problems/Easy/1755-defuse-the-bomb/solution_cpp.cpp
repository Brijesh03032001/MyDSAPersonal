class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       
       if(k==0)
       {
        vector<int>ans(code.size(),0);
        return ans;
       }
       else if(k>0)
       {
        vector<int> res;
        long long su = 0;
        for(int i=0;i<k;i++)
        {
            su += code[(i+1)];
        }
        res.push_back(su);
        int n = code.size();
        for(int j=1;j<n;j++)
        {
            su = su - code[j] + code[(k+j)%n];
            res.push_back(su);
        }
        return res;

       }
       else
       {
          vector<int>res;
          int n = code.size();
          int st = k + n;
          long long su =0;
          for(int i=st;i<n;i++)
          {
            su += code[i];
          }
          res.push_back(su);
          for(int j=1;j<n;j++)
          {
              su = su - code[st%n] + code[(n+j-1)%n];
              st++;
              res.push_back(su);
          }
          return res;
       }
       vector<int>res;
       return res;
    }
};