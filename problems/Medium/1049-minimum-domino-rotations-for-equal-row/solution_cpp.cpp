class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int n= tops.size();
        //vc1 to calculate the occurances in tops 
        //vc2 to calculate the occurances in bottoms 
        //same to calculate the same occurances (i.e occur at same position both in tops and bottoms)
        
        vector<int> vc1(7) , vc2(7) , same(7);
        for(int i=0;i<n;i++)
        {
         ++vc1[tops[i]];
         ++vc2[bottoms[i]];
            if(tops[i]==bottoms[i])
            {
                ++same[tops[i]];
            }
        }
        int ans= INT_MAX;
        for(int i=1;i<=6;i++)
        {
            if(vc1[i]+ vc2[i] - same[i] == n)
            {
                ans= min(ans,min(vc1[i],vc2[i])- same[i]);
                
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        else
            
        {
            return ans;
        }
        return 9;
    }
};