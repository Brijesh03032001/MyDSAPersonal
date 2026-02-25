class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int mo= 1000000007;
        sort(nums.begin(), nums.end());
        long long int su=1;
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        for(int i=0;i<k;i++)
        {
            long long int te= pq.top();
            pq.pop();
            te++;
            pq.push(te);
        }
        
        while(!pq.empty())
        {
            su= ((su%mo) * (pq.top()%mo))%mo;
            pq.pop();
        }
      
        return su;
    }
};