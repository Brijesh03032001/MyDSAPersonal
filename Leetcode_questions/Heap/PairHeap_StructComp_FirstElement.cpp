#include <iostream>
#include <vector>
#include "../bits/stdc++.h"
using namespace std;

typedef pair<int, int> pii;

struct FirstElementMin
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return a.first > b.first;
    }
};

struct FirstElementMax
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return a.first < b.first;
    }
};

struct FirstMinSecondMax
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return a.first == b.first ? a.second < b.second : a.first > b.first;
    }
};

struct CoordinateOrder
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return a.first == b.first ? a.second > b.second : a.first > b.first;
    }
};

int main()
{
    // Test data
    vector<pii> data = {{3, 8}, {1, 5}, {3, 2}, {7, 1}, {1, 9}, {5, 4}};

    // First element min heap
    cout << "First Element Min Heap:\n";
    priority_queue<pii, vector<pii>, FirstElementMin> pq1;
    for (auto p : data)
        pq1.push(p);
    while (!pq1.empty())
    {
        cout << "(" << pq1.top().first << "," << pq1.top().second << ") ";
        pq1.pop();
    }
    cout << "\n\n";

    // First element max heap
    cout << "First Element Max Heap:\n";
    priority_queue<pii, vector<pii>, FirstElementMax> pq2;
    for (auto p : data)
        pq2.push(p);
    while (!pq2.empty())
    {
        cout << "(" << pq2.top().first << "," << pq2.top().second << ") ";
        pq2.pop();
    }
    cout << "\n\n";

    // First min, then second max
    cout << "First Min Second Max:\n";
    priority_queue<pii, vector<pii>, FirstMinSecondMax> pq3;
    for (auto p : data)
        pq3.push(p);
    while (!pq3.empty())
    {
        cout << "(" << pq3.top().first << "," << pq3.top().second << ") ";
        pq3.pop();
    }
    cout << "\n\n";

    // Coordinate ordering (x first, then y)
    cout << "Coordinate Ordering:\n";
    priority_queue<pii, vector<pii>, CoordinateOrder> pq4;
    for (auto p : data)
        pq4.push(p);
    while (!pq4.empty())
    {
        cout << "(" << pq4.top().first << "," << pq4.top().second << ") ";
        pq4.pop();
    }
    cout << "\n\n";

    // Simple example: Process coordinates by x-value
    cout << "Real Example - Processing Points:\n";
    vector<pii> points = {{2, 5}, {1, 3}, {4, 1}, {1, 7}};
    priority_queue<pii, vector<pii>, FirstElementMin> coordPQ;

    for (auto point : points)
    {
        coordPQ.push(point);
        cout << "Added point (" << point.first << "," << point.second << ")\n";
    }

    cout << "Processing points in order:\n";
    while (!coordPQ.empty())
    {
        pii curr = coordPQ.top();
        coordPQ.pop();
        cout << "Processing point (" << curr.first << "," << curr.second << ")\n";
    }

    return 0;
}