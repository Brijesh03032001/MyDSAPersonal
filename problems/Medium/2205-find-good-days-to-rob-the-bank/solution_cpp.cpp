class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int si= security.size();
      
      vector<int>ltor(si,0);
      vector<int>rtol(si,0);
      
      for(int i=1;i<si;i++)
      { 
        
        if(security[i]<=security[i-1])
        {
          ltor[i]=1+ ltor[i-1];
        }
        
      }
      
      for(int i=si-2;i>=0;i--)
      {
        if(security[i]<=security[i+1])
        {
          rtol[i]= 1 + rtol[i+1];
        }
      }
      
      vector<int>res;
      for(int i=0;i<si;i++)
      {
        if(rtol[i]>= time && ltor[i]>=time)
        {
          res.push_back(i);
        }
      }
      return res;
    }
};