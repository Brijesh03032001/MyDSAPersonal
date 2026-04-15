class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while( i < n)
        {
            int co = nums[i] - 1;
            if(nums[co] != nums[i])
            {
               swap(nums[co], nums[i]);
            }
            else
            {
                i++;
            }
        }
        // https://chatgpt.com/c/695a127f-02ac-8331-865b-737f7aff75ad (why this logic is wrong)
        // int ma = *max_element(nums.begin() , nums.end());
        // int st = 0;
        // for(int i=0;i<n;i++)
        // {
        //     if(ma == nums[i])
        //     {
        //         st = i;
        //         break;
        //     }
        // }
        // vector<int>ans;
        // for(int i= st + 1;i<n;i++)
        // {
        //     ans.push_back(nums[i]);
        // }
        vector<int>ans;
        for(int i = 0; i < n; i++) {
        if(nums[i] != i + 1) {
          ans.push_back(nums[i]);
         }
        }

        return ans;
    }
};