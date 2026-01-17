#include <iostream>
#include <vector>
#include "../bits/stdc++.h"
using namespace std;

typedef pair<int, int> pii;

struct SumMax
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return (a.first + a.second) < (b.first + b.second);
    }
};

struct SumMin
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return (a.first + a.second) > (b.first + b.second);
    }
};

struct WeightedSum
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        return (a.first * 2 + a.second) < (b.first * 2 + b.second);
    }
};

struct SumRange
{
    constexpr bool operator()(const pii &a, const pii &b) const noexcept
    {
        int sumA = a.first + a.second;
        int sumB = b.first + b.second;
        return sumA < 10 && sumB >= 10 ? false : sumA >= 10 && sumB < 10 ? true
                                                                         : sumA < sumB;
    }
};

int main()
{
    // Test data
    vector<pii> data = {{3, 7}, {5, 2}, {1, 8}, {4, 4}, {6, 1}, {2, 5}};

    // Sum max heap
    cout << "Sum Max Heap:\n";
    priority_queue<pii, vector<pii>, SumMax> pq1;
    for (auto p : data)
        pq1.push(p);
    while (!pq1.empty())
    {
        pii curr = pq1.top();
        cout << "(" << curr.first << "," << curr.second << ") sum=" << (curr.first + curr.second) << " ";
        pq1.pop();
    }
    cout << "\n\n";

    // Sum min heap
    cout << "Sum Min Heap:\n";
    priority_queue<pii, vector<pii>, SumMin> pq2;
    for (auto p : data)
        pq2.push(p);
    while (!pq2.empty())
    {
        pii curr = pq2.top();
        cout << "(" << curr.first << "," << curr.second << ") sum=" << (curr.first + curr.second) << " ";
        pq2.pop();
    }
    cout << "\n\n";

    // Weighted sum (first*2 + second)
    cout << "Weighted Sum Heap (first*2 + second):\n";
    priority_queue<pii, vector<pii>, WeightedSum> pq3;
    for (auto p : data)
        pq3.push(p);
    while (!pq3.empty())
    {
        pii curr = pq3.top();
        cout << "(" << curr.first << "," << curr.second << ") weighted=" << (curr.first * 2 + curr.second) << " ";
        pq3.pop();
    }
    cout << "\n\n";

    // Sum range based priority
    cout << "Sum Range Priority (high priority for sum < 10):\n";
    priority_queue<pii, vector<pii>, SumRange> pq4;
    for (auto p : data)
        pq4.push(p);
    while (!pq4.empty())
    {
        pii curr = pq4.top();
        int sum = curr.first + curr.second;
        cout << "(" << curr.first << "," << curr.second << ") sum=" << sum;
        cout << (sum < 10 ? " [HIGH]" : " [LOW]") << " ";
        pq4.pop();
    }
    cout << "\n\n";

    // Real example: Game scoring system
    cout << "Real Example - Game Scoring (kills, assists):\n";
    vector<pii> players = {{12, 5}, {8, 10}, {15, 2}, {10, 8}, {7, 11}};
    priority_queue<pii, vector<pii>, SumMax> scorePQ;

    for (auto player : players)
    {
        scorePQ.push(player);
        cout << "Player: " << player.first << " kills, " << player.second << " assists = " << (player.first + player.second) << " total\n";
    }

    cout << "\nLeaderboard (by total score):\n";
    int rank = 1;
    while (!scorePQ.empty())
    {
        pii player = scorePQ.top();
        scorePQ.pop();
        cout << rank++ << ". " << player.first << " kills + " << player.second << " assists = " << (player.first + player.second) << " total\n";
    }

    return 0;
}