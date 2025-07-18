class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score =0;
        priority_queue<int>pq;
        int n = nums.size();
        for(int i=0;i<n;i++)
   {
    
    pq.push(nums[i]);
   }
   while(k>0)
   {
     int top_ele = pq.top();
     pq.pop();
     double temp_d = double(top_ele)/3;
     // cout<< temp_d << "&&&&\n";
     // cout << ceil(top_ele/3) <<"&&&\n";
     score+= top_ele;
     pq.push(int(ceil(temp_d)));
     k--;
   }

   return score;

    }
};