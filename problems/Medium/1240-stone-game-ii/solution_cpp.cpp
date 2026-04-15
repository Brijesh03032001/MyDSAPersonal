#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int dp[2][101][101];

    // sol(person, ind, piles, M) returns the total stones Alice will get
    // from index ind onward when it's 'person''s turn (1 = Alice, 0 = Bob)
    int sol(int person, int ind, vector<int> &piles, int M)
    {
        int n = (int)piles.size();
        if (ind >= n)
            return 0;

        if (dp[person][ind][M] != -1)
            return dp[person][ind][M];

        int su = 0;
        int res;
        if (person == 1)
        {
            // Alice maximizes her total
            res = INT_MIN;
        }
        else
        {
            // Bob will choose moves that minimize Alice's total
            res = INT_MAX;
        }

        // can take x piles where 1 <= x <= min(2*M, n - ind)
        int maxTake = min(2 * M, n - ind);
        for (int i = 1; i <= maxTake; i++)
        {
            su += piles[ind + i - 1]; // sum of piles Alice would take if she takes i piles now

            if (person == 1)
            {
                // Alice takes 'i' piles now (su) + whatever Alice gets later when it's Bob's turn
                res = max(res, su + sol(0, ind + i, piles, max(M, i)));
            }
            else
            {
                // Bob's turn: he doesn't add to Alice's score now; he chooses i to minimize Alice's final total
                res = min(res, sol(1, ind + i, piles, max(M, i)));
            }
        }

        dp[person][ind][M] = res;
        return res;
    }

    int stoneGameII(vector<int> &piles)
    {
        int person = 1; // 1 is Alice and 0 is Bob
        int ind = 0;    // start from first pile (index 0)
        memset(dp, -1, sizeof(dp));

        return sol(person, ind, piles, 1);
    }
};
