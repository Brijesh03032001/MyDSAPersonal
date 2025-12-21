class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
         vector<long long int>sa; 
      long long int su=0;
        long long int la=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            su+=nums[i];
            la=su;
            sa.push_back(su);
        }
       int res=INT_MAX;
        int an=0;
       for(int i=n;i>=1;i--)
       {
           int ave=0;
           if(i==n)
           {
             ave= sa[i-1]/i;
           }
           else
           {
               ave= abs((sa[i-1]/i) - ((la-sa[i-1])/(n-i)));
           }
           if(res>=ave)
           {
               //cout<<res;
               res=ave;
               an=i-1;
           }
       }
        return an;
    }
};