// ███████╗██╗  ██╗ ██████╗ ██╗   ██╗███╗   ██╗███████╗███████╗██╗  ██╗
// ██╔════╝██║  ██║██╔═══██╗██║   ██║████╗  ██║██╔════╝██╔════╝██║  ██║
// ███████╗███████║██║   ██║██║   ██║██╔██╗ ██║█████╗  █████╗  ███████║
// ╚════██║██╔══██║██║   ██║██║   ██║██║╚██╗██║██╔══╝  ██╔══╝  ██╔══██║
// ███████║██║  ██║╚██████╔╝╚██████╔╝██║ ╚████║███████╗███████╗██║  ██║
// ╚══════╝╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝╚═╝  ╚═╝

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

// ================================ DEBUGGING ================================
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
    return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#define dbgv(v)           \
    cerr << #v << " = ";  \
    for (auto x : v)      \
        cerr << x << " "; \
    cerr << endl
#define dbgm(m)                               \
    cerr << #m << " = {";                     \
    for (auto [k, v] : m)                     \
        cerr << "(" << k << ":" << v << ") "; \
    cerr << "}" << endl
#else
#define dbg(...)
#define dbgv(...)
#define dbgm(...)
#endif

// ================================ UTILITY FUNCTIONS ================================
template <typename T>
void read(T &x) { cin >> x; }
template <typename T>
void read(vector<T> &v) { each(x, v) cin >> x; }
template <typename T1, typename T2>
void read(pair<T1, T2> &p) { cin >> p.fi >> p.se; }
template <typename T>
void read(T &a, T &b) { cin >> a >> b; }
template <typename T>
void read(T &a, T &b, T &c) { cin >> a >> b >> c; }

template <typename T>
void print(T x) { cout << x << "\n"; }
template <typename T>
void print(vector<T> &v)
{
    each(x, v) cout << x << " ";
    cout << "\n";
}
template <typename T>
void print(T a, T b) { cout << a << " " << b << "\n"; }

template <typename T>
void amin(T &a, T b) { a = min(a, b); }
template <typename T>
void amax(T &a, T b) { a = max(a, b); }

// ================================ MATH UTILITIES ================================
ll modpow(ll base, ll exp, ll mod = MOD)
{
    ll res = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

ll modinv(ll a, ll mod = MOD)
{
    return modpow(a, mod - 2, mod);
}

ll ncr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    if (r == 0 || r == n)
        return 1;
    ll res = 1;
    for (ll i = 0; i < r; i++)
    {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

vector<ll> sieve(ll n)
{
    vector<bool> prime(n + 1, true);
    vector<ll> primes;
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            primes.pb(i);
            for (ll j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return primes;
}

map<ll, ll> primeFactors(ll n)
{
    map<ll, ll> factors;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1)
        factors[n]++;
    return factors;
}

// ================================ DSU (Disjoint Set Union) ================================
class DSU
{
public:
    vi parent, rank;
    int n;

    DSU(int n) : n(n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        iota(all(parent), 0);
    }

    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unite(int x, int y)
    {
        x = find(x), y = find(y);
        if (x == y)
            return false;
        if (rank[x] < rank[y])
            swap(x, y);
        parent[y] = x;
        if (rank[x] == rank[y])
            rank[x]++;
        return true;
    }

    bool same(int x, int y)
    {
        return find(x) == find(y);
    }
};

// ================================ SEGMENT TREE ================================
class SegTree
{
    vi tree;
    int n;

    void build(vi &arr, int node, int start, int end)
    {
        if (start == end)
        {
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    void update(int node, int start, int end, int idx, int val)
    {
        if (start == end)
        {
            tree[node] = val;
        }
        else
        {
            int mid = (start + end) / 2;
            if (idx <= mid)
                update(2 * node, start, mid, idx, val);
            else
                update(2 * node + 1, mid + 1, end, idx, val);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    int query(int node, int start, int end, int l, int r)
    {
        if (r < start || end < l)
            return 0;
        if (l <= start && end <= r)
            return tree[node];
        int mid = (start + end) / 2;
        return query(2 * node, start, mid, l, r) +
               query(2 * node + 1, mid + 1, end, l, r);
    }

public:
    SegTree(vi &arr)
    {
        n = sz(arr);
        tree.resize(4 * n);
        build(arr, 1, 0, n - 1);
    }

    void update(int idx, int val) { update(1, 0, n - 1, idx, val); }
    int query(int l, int r) { return query(1, 0, n - 1, l, r); }
};

// ================================ FENWICK TREE (BIT) ================================
class FenwickTree
{
    vi tree;
    int n;

public:
    FenwickTree(int n) : n(n)
    {
        tree.resize(n + 1, 0);
    }

    void update(int idx, int delta)
    {
        for (; idx <= n; idx += idx & -idx)
        {
            tree[idx] += delta;
        }
    }

    int query(int idx)
    {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx)
        {
            sum += tree[idx];
        }
        return sum;
    }

    int query(int l, int r)
    {
        return query(r) - query(l - 1);
    }
};

// ================================ TRIE ================================
class TrieNode
{
public:
    map<char, TrieNode *> children;
    bool isEnd;
    int count;

    TrieNode() : isEnd(false), count(0) {}
};

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (!node->children[c])
            {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
            node->count++;
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (!node->children[c])
                return false;
            node = node->children[c];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix)
    {
        TrieNode *node = root;
        for (char c : prefix)
        {
            if (!node->children[c])
                return false;
            node = node->children[c];
        }
        return true;
    }
};

// ================================ SPARSE TABLE ================================
class SparseTable
{
    vvi table;
    int n, K;

public:
    SparseTable(vi &arr)
    {
        n = sz(arr);
        K = log2(n) + 1;
        table.assign(n, vi(K));

        rep(i, n) table[i][0] = arr[i];

        for (int j = 1; j < K; j++)
        {
            for (int i = 0; i + (1 << j) <= n; i++)
            {
                table[i][j] = min(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    int query(int l, int r)
    {
        int j = log2(r - l + 1);
        return min(table[l][j], table[r - (1 << j) + 1][j]);
    }
};

// ================================ GRAPH UTILITIES ================================
vector<vi> adj;
vi vis, dist, parent;

void dfs(int u)
{
    vis[u] = 1;
    for (int v : adj[u])
    {
        if (!vis[v])
        {
            parent[v] = u;
            dfs(v);
        }
    }
}

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    dist[start] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

// Dijkstra's Algorithm
vi dijkstra(int start, int n)
{
    vi dist(n, INF);
    priority_queue<pii, vpii, greater<pii>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u])
            continue;

        for (auto [v, w] : adj[u])
        {
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

// ================================ STRING UTILITIES ================================
vector<int> computeLPS(string pattern)
{
    int m = sz(pattern);
    vi lps(m, 0);
    int len = 0, i = 1;

    while (i < m)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> KMP(string text, string pattern)
{
    vi lps = computeLPS(pattern);
    vi matches;
    int n = sz(text), m = sz(pattern);
    int i = 0, j = 0;

    while (i < n)
    {
        if (text[i] == pattern[j])
        {
            i++, j++;
        }

        if (j == m)
        {
            matches.pb(i - j);
            j = lps[j - 1];
        }
        else if (i < n && text[i] != pattern[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return matches;
}

// ================================ COMBINATORICS ================================
const int MAXN = 2e5 + 5;
ll fact[MAXN], inv_fact[MAXN];

void precompute_factorials()
{
    fact[0] = 1;
    FOR(i, 1, MAXN)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    inv_fact[MAXN - 1] = modinv(fact[MAXN - 1]);
    ROF(i, 0, MAXN - 1)
    {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return (fact[n] * inv_fact[r] % MOD) * inv_fact[n - r] % MOD;
}

ll nPr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return (fact[n] * inv_fact[n - r]) % MOD;
}

// ================================ CUSTOM COMPARATORS ================================
struct CompareSecond
{
    bool operator()(const pii &a, const pii &b) const
    {
        return a.se < b.se;
    }
};

// ================================ COORDINATE COMPRESSION ================================
vi compress(vi &v)
{
    vi sorted_v = v;
    sort(all(sorted_v));
    sorted_v.erase(unique(all(sorted_v)), sorted_v.end());
    each(x, v)
    {
        x = lower_bound(all(sorted_v), x) - sorted_v.begin();
    }
    return sorted_v;
}

// ================================ MAIN SOLUTION ================================
void solve()
{
    // Write your solution here
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    // Uncomment for floating point precision
    // cout << fixed << setprecision(12);

    // precompute_factorials(); // Uncomment if needed

    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }

#ifdef LOCAL
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
#endif

    return 0;
}
