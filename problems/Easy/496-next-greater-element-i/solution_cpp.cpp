class Solution {
public:
    vector<int>nextgreater(vector<int> &arr)
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
                  while(!st.empty() && arr[st.top()] <= ref)
                  {
                      vc[st.top()] = ref;
                      st.pop();
                  }
                  st.push(i);
               }
           
        }
        return vc;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> re = nextgreater(nums2);
        unordered_map<int,int>mp;
        for(int i=0;i< re.size();i++)
        {
            mp[nums2[i]] = re[i];
        }
        vector<int> fin(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++)
        {
            fin[i] = mp[nums1[i]];
        }
        return fin;
    }
};