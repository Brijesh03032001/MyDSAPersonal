class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        long long n= nums.size();
        long long total =( n* (n-1) )/2;
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++)
        {
            mp[i-nums[i]]++;
        }
        long long le = 0;
        for(auto it : mp)
        {
        long long c  = it.second;
        long long left =( c* (c-1)) / 2;
        le += left;    
        }
        return total - le ;


        
    }
};  