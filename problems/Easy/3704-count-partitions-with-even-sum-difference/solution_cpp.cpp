class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long int su = 0;
        vector<int> s;
        for(int i=0;i<nums.size(); i++)
            {
                
                su+= nums[i];
                s.push_back(su);
                
            }
        int ans = 0;
        for(int i=0;i<nums.size()-1;i++)
            {  

                long long r = su - s[i];
                if(abs(s[i] - r)%2 == 0)
                {
                    ans++;
                }
            }

        return ans;
    }
};