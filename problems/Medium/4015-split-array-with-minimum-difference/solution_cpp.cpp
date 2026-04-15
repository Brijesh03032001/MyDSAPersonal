class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int N = nums.size();
        if (N < 2) {
            return -1;
        }

     
        vector<long long> P(N + 1, 0);
        for (int i = 0; i < N; ++i) {
            P[i + 1] = P[i] + nums[i];
        }

        
        vector<bool> ValidL(N + 1, false);
        ValidL[1] = true; 
        
        for (int i = 2; i <= N; ++i) {
             if (ValidL[i-1] && nums[i-1] > nums[i-2]) {
                ValidL[i] = true;
            }
        }
        
        
        vector<bool> ValidR(N, false);
        ValidR[N-1] = true; 

        for (int i = N - 2; i >= 0; --i) {
        
            if (ValidR[i+1] && nums[i] > nums[i+1]) {
                ValidR[i] = true;
            }
        }

       
        long long min_diff = -1;

        
        for (int i = 1; i < N; ++i) {
           
            if (ValidL[i] && ValidR[i]) {
                
                long long sumL = P[i];
                long long sumR = P[N] - P[i];
                long long current_diff = abs(sumL - sumR);

              
                if (min_diff == -1 || current_diff < min_diff) {
                    min_diff = current_diff;
                }
            }
        }

        return min_diff;
    }
};