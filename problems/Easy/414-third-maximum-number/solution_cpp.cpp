class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>se(nums.begin(), nums.end());
       int le = se.size();
       int extr= -1;
       if(le<3)
       {
          extr= le-1;
       }
       else
       {
           extr = le-3;
       }

       int i=0;
       for(auto it : se)
       {
           if(i==extr)
           {
               return it;
           }
           i++;
       }
       return -1;
    }
};