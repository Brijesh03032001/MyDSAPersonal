#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        // Sort items by price, if prices are equal, by beauty in descending order
        sort(items.begin(), items.end());

        // Vector to store unique price points with maximum beauty up to that price
        vector<vector<int>> vc;
        int max_beauty = 0;

        // Populate `vc` with maximum beauty at each unique price
        for (auto& item : items) {
            int price = item[0];
            int beauty = item[1];
            
            // Update max_beauty with the highest beauty encountered so far
            max_beauty = max(max_beauty, beauty);
            
            // Only add new entry if price is unique
            if (vc.empty() || vc.back()[0] != price) {
                vc.push_back({price, max_beauty});
            } else {
                // Update the max_beauty for the last price entry if needed
                vc.back()[1] = max(vc.back()[1], max_beauty);
            }
        }

        // Output for debugging
        for (const auto& entry : vc) {
            cout << entry[0] << " --------> " << entry[1] << "\n";
        }

        // Answer queries
        vector<int> ans;
        for (int query : queries) {
            // Find the highest price <= query using binary search
            auto it = upper_bound(vc.begin(), vc.end(), vector<int>{query, INT_MAX}) - 1;
            if (it >= vc.begin() && (*it)[0] <= query) {
                ans.push_back((*it)[1]);
            } else {
                ans.push_back(0);
            }
        }

        return ans;
    }
};
