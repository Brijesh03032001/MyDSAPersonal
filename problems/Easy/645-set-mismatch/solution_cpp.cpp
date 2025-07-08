#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        const int n=nums.size();
        vector<bool> seen(n+1, 0);
        int dup, sum=0;
        for(int x: nums){
            if (seen[x]==1) dup=x;
            else seen[x]=1;
            sum+=x;
        }
        int missing=n*(n+1)/2-sum+dup;
        return {dup, missing};  
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();