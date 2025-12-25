class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int su=0;
        int n= arr.size();
        for(int i=0;i<n;i++)
        {
            su+=arr[i];
        }
        int f=0;
        if(su%3!=0) return false;
        
        int ref= su/3;
        int te=0;
        for(int i=0;i<n;i++)
        {
            te+=arr[i];
            if(te==ref)
            {
                te=0;
                f++;
            }
            
        }
        if(f>=3)
        {
            return true;
        }
        return false;
    }
};