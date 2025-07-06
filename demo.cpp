#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
    int N;
    std::cin >> N;
    int total_prices = 2 * N;
    std::vector<int> prices(total_prices);
    for (int i = 0; i < total_prices; ++i)
    {
        std::cin >> prices[i];
    }
    std::sort(prices.begin(), prices.end());
    for (int j = 1; j < total_prices; ++j)
    {
        int spread = prices[j] - prices[0];
        if (spread <= 0)
            continue; 
        
        map<int, int> counts;
        for (int price : prices)
        {
            counts[price]++;
        }
        vector<long long> mid_prices;
        bool possible = true;

        for (int i = 0; i < total_prices; ++i)
        {
            
            if (counts[prices[i]] == 0)
            {
                continue;
            }
            int bid = prices[i];
            int ask = bid + spread;
            counts[bid]--;

            if (counts.count(ask) && counts[ask] > 0)
            {
               
                counts[ask]--;
                mid_prices.push_back((long long)bid + ask); // Store sum to avoid float issues
            }
            else
            {
             
                possible = false;
                break;
            }
        }
        if (possible && mid_prices.size() == N)
        {
           sort(mid_prices.begin(), mid_prices.end());
            for (int i = 0; i < N; ++i)
            {
                cout << mid_prices[i] / 2 << (i == N - 1 ? "" : " ");
            }
            cout << std::endl;
            return;
        }
    }
    cout << "Impossible" << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}