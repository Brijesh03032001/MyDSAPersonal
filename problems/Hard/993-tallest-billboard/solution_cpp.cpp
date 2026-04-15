class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
       
        unordered_map<int, int> dp;
        dp[0] = 0;

        for (int r : rods) {
           
            unordered_map<int, int> new_dp = dp;

            for (auto& entry : dp) {
                int diff = entry.first;
                int taller = entry.second;
                int shorter = taller - diff; // Implicitly calculated krna bc

               
                new_dp[diff + r] = max(new_dp[diff + r], taller + r);

               
                int newDiff = abs(diff - r);
                int newTaller = max(taller, shorter + r);
                new_dp[newDiff] = max(new_dp[newDiff], newTaller);
                
               
            }
            dp = new_dp;
        }

        return dp[0];
    }
};