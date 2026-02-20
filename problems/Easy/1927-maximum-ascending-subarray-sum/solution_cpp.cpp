class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
      
      int si= nums.size();
      int res=0;
     // vector<int>r()
       for(int i=0;i<si-1;)
       {
         if(nums[i]<nums[i+1])
         {
           int su=nums[i];
          // int j=i;
           while(i<si-1 && nums[i]<nums[i+1])
           {
              i++;
             su+=nums[i];
             
           }
           res=max(res,su);
         }
         else
         {
           i++;
         }
         
       }
      
     int ref= *max_element(nums.begin(),nums.end());
      if(ref>res)
      {
        return ref;
      }
      
      return res;
      
    }
};