class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> vc;
        int n1= nums1.size();
        int n2= nums2.size();
        priority_queue<pair<int, pair<int,int>>>hp;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {

                 int ans = nums1[i] + nums2[j];
                 if(hp.size() < k)
                 {
                    hp.push({ans, {nums1[i], nums2[j]}});

                 }
                 else if(ans > hp.top().first)
                 {
                   break;
                 }
                 else if(ans < hp.top().first)
                 {
                       hp.pop();
                       hp.push({ans , {nums1[i], nums2[j]}});

                 }
            }
        }

       while(!hp.empty())
       {
           auto it = hp.top();
           hp.pop();
           vector<int>temp;
           temp.push_back(it.second.first);
           temp.push_back(it.second.second);
           vc.push_back(temp);

       }

      return vc;
    }
};