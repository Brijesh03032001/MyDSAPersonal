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
vector<pair<int, int>> ans(vector<int> &arr, int tar)
{
    int p1 = 0;
    int p2 = arr.size() - 1;
    vector<pair<int, int>> pc;

    while (p1 < p2)
    {
        int sum = arr[p1] + arr[p2];

        if (sum < tar)
        {
            p1++;
        }
        else if (sum > tar)
        {
            p2--;
        }
        else // sum == tar
        {
            int val1 = arr[p1];
            int val2 = arr[p2];

            // Case 1: Duplicates are the same value (e.g., arr=[4, 4, 4], tar=8)
            if (val1 == val2)
            {
                // We have a block of the same number, e.g., [4, 4, 4, 4]
                // We need to add all unique pairs (i, j) in this range
                // This is an "N choose 2" combination problem
                for (int i = p1; i <= p2; i++)
                {
                    for (int j = i + 1; j <= p2; j++)
                    {
                        pc.push_back({i, j});
                    }
                }
                // We've processed this entire block, so we can stop.
                break;
            }

            // Case 2: Duplicates are different values (e.g., arr=[2, 2, 6, 6], tar=8)

            // Find the end of the val1 block
            int p1_end = p1;
            while (p1_end < p2 && arr[p1_end] == val1)
            {
                p1_end++;
            }
            // p1_end is now at the first index *after* the val1 block

            // Find the start of the val2 block
            int p2_start = p2;
            while (p2_start > p1 && arr[p2_start] == val2)
            {
                p2_start--;
            }
            // p2_start is now at the first index *before* the val2 block

            // Add the cross-product of all pairs
            // The val1 block is [p1, p1_end - 1]
            // The val2 block is [p2_start + 1, p2]
            for (int i = p1; i < p1_end; i++)
            {
                for (int j = p2_start + 1; j <= p2; j++)
                {
                    pc.push_back({i, j});
                }
            }

            // Move the pointers past the blocks we just processed
            p1 = p1_end;
            p2 = p2_start;
        }
    }
    return pc;
}
void solve()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    vector<pair<int, int>> vc = ans(arr, target);
    for (auto it : vc)
    {
        cout << it.first << " **** " << it.second << "\n";
    }
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
