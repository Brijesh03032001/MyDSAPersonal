class Solution {
public:
    
    int next(vector<int>& nums,int i) {
        int n = nums.size();
        while (i<n && nums[i]==nums[i-1]) ++i;
        return i;
    }
    
    int prev(vector<int>& nums,int i) {
        while (i>=0 && nums[i]==nums[i+1]) --i;
        return i;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        if (n<3) return res;
        sort(nums.begin(),nums.end());
        int a=0,b,c;
        while (a<n) {
            if (nums[a]>0) break;
            b = a+1;
            c = n-1;
            int sum=-nums[a];
            while (b<c) {
                if (nums[b]+nums[c]==sum) {
                    vector<int> sol;
                    sol.push_back(nums[a]);
                    sol.push_back(nums[b]);
                    sol.push_back(nums[c]);
                    res.push_back(sol);
                    b = next(nums,b+1);
                    c = prev(nums,c-1);
                } 
                else if (nums[b]+nums[c]>sum) c = prev(nums,c-1);
                else b = next(nums,b+1);
            }
            a = next(nums,a+1);
        }
        return res;
    }
};