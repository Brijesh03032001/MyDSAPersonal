class Solution {
public:
    vector<int> nextGre(vector<int>& arr)
    {
        int n = arr.size();
        stack<int>st;
        vector<int> res(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i] > arr[st.top()])
            {
                st.pop();
            }
            if(st.empty()) 
            {
                res[i] = -1;
                st.push(i);
            }
            else
            {
                 res[i] = st.top();
                 st.push(i);
            }
        }

        return res;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]] = i;
        }
         vector<int> ans;
        vector<int> ref = nextGre(nums2);
        for(int i=0;i<nums1.size();i++)
        {
             int t = ref[mp[nums1[i]]];
             if(t == -1)
             {
                ans.push_back(-1);
             }
             else
             {
                 ans.push_back(nums2[t]);
             }
            

        }
        return ans;
    }
};