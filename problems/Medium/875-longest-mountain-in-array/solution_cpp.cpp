class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
       int le= arr.size();
        if(le<=2)
        {
          return 0;
        }
      
      int ref;
      int res=0;
      for(int i=1;i<le-1;)
      {
        
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
          int ans=1;
             ref=i;
             int j=i;
             while(j>0 && arr[j]>arr[j-1])
             {
               ans++;
               j--;
             }
          
             while(i<le-1 && arr[i]>arr[i+1])
             {
               i++;
               ans++;
               
             }
          
          res= max(res,ans);
          
        }
        else
        {
          i++;
        }
        
      }
      
      return res;
    }
  
};