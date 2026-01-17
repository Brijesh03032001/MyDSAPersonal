
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>
#include "../bits/stdc++.h"
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

// Solution By Brijesh Kumar
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int l = nums.size() - 1;
        int f = 0;
        int ans = -1;
        while (f <= l)
        {
            int mid = f + (l - f) / 2;
            if (nums[mid] < nums[0])
            {
                ans = nums[mid];
                l = mid - 1;
            }
            else
            {
                f = mid + 1;
            }
        }
        if (ans == -1)
        {
            return nums[0];
        }
        return ans;
    }
};

void dis()
{
    int n;

    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    int minElement = sol.findMin(nums);

    cout << "Minimum element: " << minElement << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        dis();
    }

    return 0;
}
