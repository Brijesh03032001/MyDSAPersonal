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
long long countPairs(vector<int> &arr, int tar)
{
    int p1 = 0;
    int p2 = arr.size() - 1;
    long long count = 0; // Use long long for large counts

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
                // Number of elements in this block
                long long k = p2 - p1 + 1;
                // Add "k choose 2" to the count
                count += (k * (k - 1)) / 2;
                // We've processed this entire block, so we can stop.
                break;
            }

            // Case 2: Duplicates are different values (e.g., arr=[2, 2, 6, 6], tar=8)

            // Find the count of val1
            long long k1 = 0;
            int p1_runner = p1;
            while (p1_runner < p2 && arr[p1_runner] == val1)
            {
                k1++;
                p1_runner++;
            }

            // Find the count of val2
            long long k2 = 0;
            int p2_runner = p2;
            while (p2_runner > p1 && arr[p2_runner] == val2)
            {
                k2++;
                p2_runner--;
            }

            // The number of pairs is the cross-product
            count += (k1 * k2);

            // Move the pointers past the blocks we just processed
            p1 = p1_runner;
            p2 = p2_runner;
        }
    }
    return count;
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
    int TotalPairs = countPairs(arr, target);
    cout << TotalPairs << "\n";
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
