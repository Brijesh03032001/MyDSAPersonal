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
                  while(!st.empty() && arr[st.top()] < ref)
                  {
                      vc[st.top()] = i;
                      st.pop();
                  }
                  st.push(i);
               }
           
        }
        return vc;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> re = nextgreater(temperatures);
        for(int i=0;i<temperatures.size();i++)
        {
            if(re[i] != -1)
            {
            re[i] = re[i] - i ;

            }
            else
            {
                re[i] = 0;
            }
        }
        return re;
    }
};