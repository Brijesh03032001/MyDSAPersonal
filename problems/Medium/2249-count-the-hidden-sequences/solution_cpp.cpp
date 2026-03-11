class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        
        vector<int>vc=differences;
        int tl=lower;
        int tu=upper;
        int su=0;
        for(int i=0;i<vc.size();i++)
        {
            su+=vc[i];
            if(su>=0)
            {
                tu= min(tu, upper-su);
                if(tu<lower)
                {
                return 0;
                }
            }
            else
            {
                tl=max(tl,lower-su);
                if(tl>upper)
                {
                    return 0;
                }
                
            }
            
        }
        if(tu<tl)
        {
            return 0;
        }
        int ans= tu-tl+1;
        return ans;
        
    }
};