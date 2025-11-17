#include "bits/stdc++.h"
using namespace std;

// ================================ MACROS ================================
#define ll long long
#define ld long double
#define ull unsigned long long
#define int long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
// ... (other macros unchanged)

int32_t main(); // forward

// --- New: dp storing pairs for (aliceScore, bobScore)
vector<vector<vector<pair<long long, long long>>>> dpPair;

// recursive function returning {aliceScore, bobScore}
pair<long long, long long> solScores(int person, int ind, vector<int> &piles, int M)
{
    int n = (int)piles.size();
    if (ind >= n)
        return {0LL, 0LL};

    // memo check
    if (dpPair[person][ind][M].first != -1)
        return dpPair[person][ind][M];

    long long su = 0;
    pair<long long, long long> best;
    if (person == 1)
    {
        // Alice will maximize her final total
        best = {LLONG_MIN, LLONG_MIN};
    }
    else
    {
        // Bob will choose to minimize Alice's final total, so initialize best accordingly
        best = {LLONG_MAX, LLONG_MAX};
    }

    int maxTake = min(2 * M, n - ind);
    for (int x = 1; x <= maxTake; ++x)
    {
        su += piles[ind + x - 1];
        auto next = solScores(1 - person, ind + x, piles, max(M, x));

        pair<long long, long long> cur;
        if (person == 1)
        {
            // Alice takes 'su' now
            cur.first = su + next.first; // Alice's total
            cur.second = next.second;    // Bob's total stays from future
            // choose branch that maximizes Alice
            if (cur.first > best.first)
                best = cur;
        }
        else
        {
            // Bob takes 'su' now
            cur.first = next.first;        // Alice's total from future
            cur.second = su + next.second; // Bob's total
            // Bob chooses move that *minimizes* Alice's final score
            if (cur.first < best.first)
                best = cur;
        }
    }

    dpPair[person][ind][M] = best;
    return best;
}

int stoneGameII_withBothScores(vector<int> &piles, pair<long long, long long> &outBoth)
{
    int n = (int)piles.size();
    // dpPair dimensions: person (0/1) x ind (0..n) x M (0..n)
    dpPair.assign(2, vector<vector<pair<long long, long long>>>(n + 1, vector<pair<long long, long long>>(n + 1, {-1LL, -1LL})));

    auto ans = solScores(1, 0, piles, 1); // start with Alice
    outBoth = ans;
    return (int)ans.first; // return Alice score for compatibility, but outBoth has both
}

void solve()
{
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
        cin >> piles[i];

    pair<long long, long long> both;
    stoneGameII_withBothScores(piles, both);
    // both.first = Alice, both.second = Bob
    cout << "Alice: " << both.first << " Bob: " << both.second << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
        solve();
    return 0;
}
