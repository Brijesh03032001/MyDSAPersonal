class Solution {
public:
    vector<long long int> array()
    {
        vector<long long int>res;
        long long int su=2;
        res.push_back(2);
        for(int i=2;i<=31;i++)
        {
            su = su*2;
            res.push_back(su);
        }
        return res;
    }
    int rangeBitwiseAnd(int left, int right) {
        vector<long long int>arr = array();
        if(left==0) return 0;
        if(left==right) return left;

        int st=-1;
        int end=-1;
        int i1=0;
        int i2=0;
        while(left >= arr[i1])
        {
            st=i1;
            i1++;
        }
        while(right >=arr[i2])
        {
            end= i2;
            i2++;
        }
        if(st== end)
        {
            int s_r = arr[st];
            if(arr[st]<left)
            {
               s_r= left;
            }
            int ans = s_r;
            for(long long int i=s_r+1;i<=right;i++)
            {
                ans &= i;
            }
            return ans;
        }
        return 0;
    }
};