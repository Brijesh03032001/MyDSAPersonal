class Solution {
public:
    long long solve(vector<vector<int>>& questions , int n , int i, vector<long long>&dp)
    {
        if(i>=n) return 0;
        if(i==0 && n==1) return questions[i][0];
        if(dp[i]!= -1 ) return dp[i];
        long long considered = questions[i][0] + solve(questions, n, i+questions[i][1]+1, dp);
        long long not_con = solve(questions,n, i+1, dp);
        // cout << max(considered, not_con) << "**" <<i << "\n";
        long long ans = max(considered, not_con);
        return dp[i] = ans;
        
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        int i =0;
        int su =0;
         vector<long long>dp(n+1, -1);
        return solve(questions, n, i, dp);
 
    }
};