class Solution {
public:
    int strStr(string haystack, string needle) {
       int len=0;
        string h=haystack;
        string p=needle;
        int n=h.size();
        int m=p.size();
        if(n==0&&m!=0)return -1;
        else if(m==0)
             return 0;
        
    
        int ls[m];
        memset(ls,0,sizeof(ls));
        ls[0]=0;
        int i=1;
        
        while(i<m)
        {
            if(p[i]==p[len])
            {
                len++;
                
                ls[i]=len;
                i++;
            }
            else if(len!=0)
            {
                len=ls[len-1];
            }
            else
            {
                ls[i]=0;
                i++;
            }
        }
        
        i=0;
        int j=0;
        int ans=-1;
        while(j<n)
        {
            if(p[i]==h[j])
            {
                i++;
                j++;
            }
            if(i==m&&ans==-1)
            {
              ans=j-i;
                i=ls[i-1];
            }
            else if(j<n&&p[i]!=h[j])
            {
                if(i!=0)
                {
                    i=ls[i-1];
                }
                else
                {
                    j++;
                }
            }
        }
        
        return ans;
        
    }
};