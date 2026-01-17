#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii;

// MIN HEAP by second element
struct SecondElementMin {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};

// MAX HEAP by second element
struct SecondElementMax {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        if (a.second != b.second) {
            return a.second < b.second;
        }
        return a.first < b.first;
    }
};

// MIN by second, MAX by first (tiebreaker)
struct SecondMinFirstMax {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

// Simple range-based priority
struct SecondElementRange {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        int priorityA = (a.second <= 3) ? 1 : (a.second <= 6) ? 2 : 3;
        int priorityB = (b.second <= 3) ? 1 : (b.second <= 6) ? 2 : 3;
        
        if (priorityA != priorityB) {
            return priorityA > priorityB;
        }
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};

void showpq(priority_queue<pii, vector<pii>, SecondElementMin> pq) {
    cout << "SecondElementMin: ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << "\n";
}

void showpqMax(priority_queue<pii, vector<pii>, SecondElementMax> pq) {
    cout << "SecondElementMax: ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << "\n";
}

void showpqMixed(priority_queue<pii, vector<pii>, SecondMinFirstMax> pq) {
    cout << "SecondMinFirstMax: ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << "\n";
}

void showpqRange(priority_queue<pii, vector<pii>, SecondElementRange> pq) {
    cout << "SecondElementRange: ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << "\n";
}

int main() {
    cout << "=== PRIORITY QUEUE WITH STRUCT COMPARATORS - SECOND ELEMENT ORDERING ===\n\n";
    
    vector<pii> testData = {{5, 2}, {3, 7}, {1, 2}, {4, 5}, {2, 7}, {6, 1}};
    
    cout << "Test Data: ";
    for (auto& p : testData) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << "\n\n";
    
    // 1. MIN HEAP by second element
    priority_queue<pii, vector<pii>, SecondElementMin> minHeap;
    for (auto& p : testData) {
        minHeap.push(p);
    }
    showpq(minHeap);
    
    // 2. MAX HEAP by second element
    priority_queue<pii, vector<pii>, SecondElementMax> maxHeap;
    for (auto& p : testData) {
        maxHeap.push(p);
    }
    showpqMax(maxHeap);
    
    // 3. Mixed ordering
    priority_queue<pii, vector<pii>, SecondMinFirstMax> mixedHeap;
    for (auto& p : testData) {
        mixedHeap.push(p);
    }
    showpqMixed(mixedHeap);
    
    // 4. Range-based priority
    cout << "\nRange Priority: 1-3=High, 4-6=Medium, 7+=Low\n";
    priority_queue<pii, vector<pii>, SecondElementRange> rangeHeap;
    vector<pii> rangeData = {{10, 8}, {5, 2}, {7, 4}, {3, 1}, {1, 9}, {2, 6}};
    for (auto& p : rangeData) {
        rangeHeap.push(p);
    }
    showpqRange(rangeHeap);
    
    cout << "\n=== Real World Example: Task Scheduling ===\n";
    // Task data: (taskID, deadline)
    priority_queue<pii, vector<pii>, SecondElementMin> taskQueue;
    vector<pii> tasks = {{101, 5}, {203, 3}, {305, 5}, {102, 2}};
    
    cout << "Tasks (ID, deadline): ";
    for (auto& task : tasks) {
        taskQueue.push(task);
        cout << "(" << task.first << "," << task.second << ") ";
    }
    cout << "\n";
    
    cout << "Execution order (earliest deadline first):\n";
    while (!taskQueue.empty()) {
        auto task = taskQueue.top();
        taskQueue.pop();
        cout << "Task " << task.first << " (Deadline: " << task.second << ")\n";
    }
    
    return 0;
}