class Solution {
public:
   int su_of_dig(int n)
   {
    int ans =0;
    while(n>0)
    {
      ans+= (n%10);
      n= n/10;
    }
    return ans;
   }
    int maximumSum(vector<int>& nums) {
       unordered_map<int,pair<int,vector<int>>>mp;
       int n = nums.size();
       for(int  i=0;i<n;i++)
       {
          int su = su_of_dig(nums[i]);
          mp[su].second.push_back(nums[i]);
          mp[su].first++;
           
       }  
       vector<pair<int, pair<int, vector<int>>>> vec(mp.begin(), mp.end());

    // Sort the vector by key (first element of the pair)
    sort(vec.rbegin(), vec.rend());
    int ans = -1;
    //    sort(mp.rbegin(), mp.rend());
       for(auto it: vec)
       {
        if(it.second.first >= 2)
        {
            vector<int> te= it.second.second;

            sort(te.rbegin(), te.rend());
            ans = max(ans, te[0] + te[1]);
       
       }
       }
       return ans;
    }
};