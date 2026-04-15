class Solution {
public:vector<int>nextgreater(vector<int> &arr)
    {
        stack<int>st;
        vector<int>vc(arr.size(), -1);
        int n = arr.size();
        st.push(0);
        for(int i=1;i<n; i++)
        {
           
               if(arr[i] < arr[i-1] || st.empty())
               {
                 st.push(i);
               }
               else
               {
                  int ref = arr[i];
                  while(!st.empty() && arr[st.top()] < ref)
                  {
                      vc[st.top()] = ref;
                      st.pop();
                  }
                  st.push(i);
               }
           
        }
        return vc;
    }
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> temp= nums;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
        }
        vector<int> re = nextgreater(temp);
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
             res.push_back(re[i]);
        }
        return res;
    }
};