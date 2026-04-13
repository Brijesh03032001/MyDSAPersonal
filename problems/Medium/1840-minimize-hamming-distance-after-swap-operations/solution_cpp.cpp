#include <bits/stdc++.h>
using namespace std;

class dsu {
public:
    vector<int> parent, rerank;

    dsu(int n) {
        parent.resize(n);
        rerank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);

        if (px == py) return;

        if (rerank[px] < rerank[py]) {
            parent[px] = py;
        } else if (rerank[px] > rerank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rerank[px]++;
        }
    }
};

class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        
        int n = source.size();
        dsu ds(n);

        // Step 1: Build components
        for (auto &e : allowedSwaps) {
            ds.unite(e[0], e[1]);
        }

        // Step 2: Group indices by root
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            int root = ds.find(i);
            groups[root].push_back(i);
        }

        int ans = 0;

        // Step 3: Process each component
        for (auto &g : groups) {
            unordered_map<int, int> freq;

            // count source frequencies
            for (int idx : g.second) {
                freq[source[idx]]++;
            }

            // match with target
            for (int idx : g.second) {
                if (freq[target[idx]] > 0) {
                    freq[target[idx]]--;
                } else {
                    ans++; // mismatch
                }
            }
        }

        return ans;
    }
};