#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    struct hash_pair {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };

    unordered_map<pair<int, int>, int, hash_pair> mp;  // Use custom hash function
    int c = 0;

    void solve(int x, int y, int r) {
        for (int i = x - r; i <= x + r; i++) {
            for (int j = y - r; j <= y + r; j++) { 
                if (((i - x) * (i - x) + (j - y) * (j - y)) <= (r * r) && mp.find({i, j}) == mp.end()) {
                    mp[{i, j}] = 1;  // Correct way to insert into unordered_map
                    c++;
                }
            }
        }
    }

    int countLatticePoints(vector<vector<int>>& circles) {
        int le = circles.size();
        for (int i = 0; i < le; i++) {
            int x = circles[i][0];
            int y = circles[i][1];
            int r = circles[i][2];
            solve(x, y, r);
        } 
        return c;
    }
};
