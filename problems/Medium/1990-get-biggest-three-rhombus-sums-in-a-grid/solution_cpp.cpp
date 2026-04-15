class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        set<int> store;
        
        int m=grid.size();
        int n=grid[0].size();
        int mxSize=(min(m,n)+1)/2;
        
        for(int sz=1;sz<=mxSize;sz++)
        {
            int r=sz-1;
            
            
            int cl=n-sz*2+1;
            int rl=m-sz;
            while(r<=rl)
            {
                int c=0;
                while(c<=cl)
                {
                    int sum=grid[r][c];
                    
                    int tr=r-1,tc=c+1,tsz=sz-1;
                    
                    while(tsz--)
                        sum+=grid[tr--][tc++];
 
                    tr+=2;tsz=sz-1;
                    
                    while(tsz--)
                       sum+=grid[tr++][tc++];
                    
                    tc-=2;tsz=sz-1;
                    
                    while(tsz--)
                        sum+=grid[tr++][tc--];
                    
                    tr-=2;tsz=sz-2;
                    
                    while(tsz>0){
                        sum+=grid[tr--][tc--];
                        tsz--;
                    }
                    
                    store.insert(sum);
                  
                    c++;
                }
                r++;
            }
        
        }
        
        vector<int> ans;
        
        for(auto n:store)
            ans.push_back(n);
          sort(ans.begin(),ans.end(),greater<int>());
        if(ans.size()>3)
            ans.resize(3);
        
        return ans;
       
    }
};