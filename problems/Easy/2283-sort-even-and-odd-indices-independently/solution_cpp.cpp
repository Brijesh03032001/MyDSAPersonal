class Solution {
public:
    static bool com(int a, int b)
    {
        if(a>b)
        {
            return true;
        }
        return false;
    }
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int le=nums.size();
        vector<int>odd;
        vector<int>eve;
        for(int i=0;i<le;i++)
        {
            if(i%2==0)
            {
                eve.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(eve.begin(),eve.end());
        sort(odd.begin(),odd.end(),com);
        vector<int>ans;
        for(int i=0;i<odd.size();i++)
        {
            ans.push_back(eve[i]);
            ans.push_back(odd[i]);
            
        }
        if(eve.size()!=odd.size())
        {
            ans.push_back(eve[eve.size()-1]);
        }
        return ans;
        
    }
};