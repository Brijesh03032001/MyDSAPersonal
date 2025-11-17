
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
#define vvi vector<vi>
#define vvll vector<vll>
#define vpii vector<pii>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

// Shortcuts
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())

// Loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define each(x, a) for (auto &x : a)

// Bit Operations
#define LSOne(S) ((S) & -(S))
#define ctz __builtin_ctzll
#define clz __builtin_clzll
#define popcount __builtin_popcountll
#define setBit(S, pos) ((S) |= (1LL << (pos)))
#define clearBit(S, pos) ((S) &= ~(1LL << (pos)))
#define toggleBit(S, pos) ((S) ^= (1LL << (pos)))
#define checkBit(S, pos) ((S) & (1LL << (pos)))

// Math Operations
#define gcd __gcd
#define lcm(a, b) ((a) / __gcd(a, b) * (b))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define min4(a, b, c, d) min(min(a, b), min(c, d))

// Constants
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const int IINF = 1e9;
const ld EPS = 1e-9;
const ld PI = acos(-1);
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};

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
            // Alice takes a'i' piles now (su) + whatever Alice gets later when it's Bob's turn
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

void solve()
{
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }

    cout << stoneGameII(piles) << "\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}