class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ref;
        int ans = 0;
        int only_mod1_mod2_sum = 0;
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<nums.size();i++)
        {
            int v = (nums[i]%3);
            if(v == 0)
            {
                ans += nums[i];
            }
            else
            {
            mp[v].push_back(nums[i]);
            only_mod1_mod2_sum += nums[i];
            }
        }
        for(auto &it : mp)
        {
            sort(it.second.rbegin(), it.second.rend());

        }
        if(only_mod1_mod2_sum % 3 == 0)
        {
            return ans + only_mod1_mod2_sum;
        }
        else if(only_mod1_mod2_sum %3 == 1)
        {
            int si_one = mp[1].size();
            int si_two = mp[2].size();
            int r_one = 0;
            int r_two = 0;
            if(si_one >= 1) { 

             r_one = only_mod1_mod2_sum - mp[1][si_one -1];
            }
            if(si_two >= 2)
            {

            r_two = only_mod1_mod2_sum - mp[2][si_two - 1] - mp[2][si_two - 2];
            }
            return ans + max(r_one, r_two);
        }
        else
        {
            int si_one = mp[1].size();
            int si_two = mp[2].size();
            int r_one = 0;
            int r_two = 0;
            if(si_two >= 1) { 

             r_two = only_mod1_mod2_sum - mp[2][si_two -1];
            }
            if(si_one >= 2)
            {

            r_one = only_mod1_mod2_sum - mp[1][si_one - 1] - mp[1][si_one - 2];
            }
            return ans + max(r_one, r_two);
        }
        
        return ans;



    }
};