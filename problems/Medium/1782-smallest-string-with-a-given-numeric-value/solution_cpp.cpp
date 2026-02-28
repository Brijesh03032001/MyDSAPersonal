class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+='a';
        }
        //cout<<ans;
        int j=n-1;
        int temp= k - n;
        while(((temp+1 )/26)>0 && j>=0)
        {
            ans[j]='z';
            temp= temp-25;
            //cout<<ans<<"\n";
            j--;
        }
        if(j>=0)
        {
            
               char c= temp+1+96;
            ans[j]= c;
        }
        
        return ans;
        
    }
};