class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
      int ar= additionalRocks;
      vector<int>le;
      int n= capacity.size();
      for(int i=0;i<capacity.size();i++)
      {
        le.push_back(capacity[i]-rocks[i]);
      }
      sort(le.begin(),le.end());
      int ans=0;
      int st=0;
      for(int i=0;i<n;i++)
      {
        if(le[i]==0)
        {
          ans++;
          
        }
        else
        {
          st=i;
          break;
        }
      }
      for(int j=st;j<n;j++)
      {
          if(le[j]<=ar)
          {
            ans++;
            ar=ar-le[j];
          }
        else 
        {
          return ans;
        }
        
          if(ar<=0)
          {
            break;
          }
      }
      return ans;
    }
};