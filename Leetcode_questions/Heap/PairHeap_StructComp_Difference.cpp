#include <iostream>
#include <vector>
#include "../bits/stdc++.h"
using namespace std;

typedef pair<int, int> pii;

struct AbsDifferenceMax
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return abs(a.first - a.second) < abs(b.first - b.second);
    }
};

struct AbsDifferenceMin
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return abs(a.first - a.second) > abs(b.first - b.second);
    }
};

struct SignedDifference
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return (a.first - a.second) < (b.first - b.second);
    }
};

struct RatioCompare
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return a.second == 0 && b.second == 0 ? a.first < b.first : a.second == 0 ? false
                                                                : b.second == 0   ? true
                                                                                  : (double)a.first / a.second < (double)b.first / b.second;
    }
};

int main()
{
    // Test data
    vector<pii> data = {{8, 3}, {2, 7}, {5, 5}, {9, 1}, {3, 6}, {7, 4}};

    // Max absolute difference
    cout << "Max Absolute Difference Heap:\n";
    priority_queue<pii, vector<pii>, AbsDifferenceMax> pq1;
    for (auto p : data)
        pq1.push(p);
    while (!pq1.empty())
    {
        pii curr = pq1.top();
        cout << "(" << curr.first << "," << curr.second << ") diff=" << abs(curr.first - curr.second) << " ";
        pq1.pop();
    }
    cout << "\n\n";

    // Min absolute difference
    cout << "Min Absolute Difference Heap:\n";
    priority_queue<pii, vector<pii>, AbsDifferenceMin> pq2;
    for (auto p : data)
        pq2.push(p);
    while (!pq2.empty())
    {
        pii curr = pq2.top();
        cout << "(" << curr.first << "," << curr.second << ") diff=" << abs(curr.first - curr.second) << " ";
        pq2.pop();
    }
    cout << "\n\n";

    // Signed difference (first - second)
    cout << "Signed Difference Heap (first - second):\n";
    priority_queue<pii, vector<pii>, SignedDifference> pq3;
    for (auto p : data)
        pq3.push(p);
    while (!pq3.empty())
    {
        pii curr = pq3.top();
        cout << "(" << curr.first << "," << curr.second << ") diff=" << (curr.first - curr.second) << " ";
        pq3.pop();
    }
    cout << "\n\n";

    // Ratio comparison (first/second)
    cout << "Ratio Heap (first/second):\n";
    priority_queue<pii, vector<pii>, RatioCompare> pq4;
    vector<pii> ratioData = {{6, 2}, {4, 1}, {3, 3}, {8, 4}, {5, 1}, {9, 3}};
    for (auto p : ratioData)
        pq4.push(p);
    while (!pq4.empty())
    {
        pii curr = pq4.top();
        cout << "(" << curr.first << "," << curr.second << ") ratio=" << (double)curr.first / curr.second << " ";
        pq4.pop();
    }
    cout << "\n\n";

    // Real example: Server load balancing
    cout << "Real Example - Server Load Balancing (CPU, Memory):\n";
    vector<pii> servers = {{80, 60}, {20, 90}, {70, 30}, {40, 40}, {90, 10}};
    priority_queue<pii, vector<pii>, AbsDifferenceMin> loadPQ;

    for (auto server : servers)
    {
        loadPQ.push(server);
        int loadDiff = abs(server.first - server.second);
        cout << "Server: CPU=" << server.first << "%, Memory=" << server.second << "%, Load difference=" << loadDiff << "%\n";
    }

    cout << "\nServers by load balance (most balanced first):\n";
    int rank = 1;
    while (!loadPQ.empty())
    {
        pii server = loadPQ.top();
        loadPQ.pop();
        int loadDiff = abs(server.first - server.second);
        cout << rank++ << ". CPU=" << server.first << "% Memory=" << server.second << "% (diff=" << loadDiff << "%)\n";
    }

    return 0;
}