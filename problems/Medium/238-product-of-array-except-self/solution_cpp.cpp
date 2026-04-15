class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> lp(n+1, 1);
        vector<long long> rp(n+1, 1);
        long long lpro = 1;
        long long rpro = 1;
        for(int i=0;i<n; i++)
        {
            lpro *= nums[i];
            lp[i+1] = lpro;
        }
        for(int i=n-1;i>=0;i--)
        {
            rpro *= nums[i];
            rp[i] = rpro;
        }
        // for(int i =0 ;i < n+1 ; i++)
        // {
        //     cout << lp[i] << "**";

        // }
        // cout << "\n";
        // for(int i =0 ;i < n+1 ; i++)
        // {
        //     cout << rp[i] << "**";
            
        // }
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            res[i] = lp[i] * rp[i+1];
        }
        return res;
    }
};