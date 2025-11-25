class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>sp(nums.begin(),nums.end());
        unordered_set<int>check;
        int le = 0;
        for(int i=0;i<nums.size();i++)
        {
              int re= nums[i];
              if((check.find(re-1)== check.end()) && sp.find(re-1)==sp.end() )
              {
                  int co=0;
                  int ref= re;
                  //check.insert(ref);
                  while(sp.find(ref)!=sp.end())
                  {
                      check.insert(ref);
                      ref++;
                      co++;
                  }

                  le= max(le, co);
              }
             
        }
        return le;
    }
};