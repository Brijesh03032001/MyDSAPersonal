#include <iostream>
#include <vector>
#include "../bits/stdc++.h"
using namespace std;

// Custom comparator for integers - Min heap for even numbers, max heap for odd numbers
struct CustomComparator
{
    constexpr bool operator()(const int &a, const int &b) const noexcept
    {
        if (a % 2 == 0 && b % 2 == 0)
            return a > b; // Min heap for even
        if (a % 2 == 1 && b % 2 == 1)
            return a < b;  // Max heap for odd
        return a % 2 == 0; // Even numbers have higher priority
    }
};

class MinHeap
{
private:
    vector<int> heap;

    void heapifyUp(int index)
    {
        if (index == 0)
            return;
        int parent = (index - 1) / 2;
        if (heap[index] < heap[parent])
        {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index)
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if (left < heap.size() && heap[left] < heap[smallest])
            smallest = left;
        if (right < heap.size() && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index)
        {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int val)
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int extractMin()
    {
        if (heap.empty())
            return -1;
        int minVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty())
            heapifyDown(0);
        return minVal;
    }

    int getMin()
    {
        return heap.empty() ? -1 : heap[0];
    }

    bool empty()
    {
        return heap.empty();
    }

    int size()
    {
        return heap.size();
    }
};

class MaxHeap
{
private:
    vector<int> heap;

    void heapifyUp(int index)
    {
        if (index == 0)
            return;
        int parent = (index - 1) / 2;
        if (heap[index] > heap[parent])
        {
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index)
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index)
        {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int val)
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int extractMax()
    {
        if (heap.empty())
            return -1;
        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty())
            heapifyDown(0);
        return maxVal;
    }

    int getMax()
    {
        return heap.empty() ? -1 : heap[0];
    }

    bool empty()
    {
        return heap.empty();
    }

    int size()
    {
        return heap.size();
    }
};

int main()
{
    cout << "=== MIN HEAP IMPLEMENTATION ===\n";

    MinHeap minHeap;
    vector<int> data = {15, 10, 20, 8, 25, 12};

    cout << "Inserting: ";
    for (int val : data)
    {
        cout << val << " ";
        minHeap.insert(val);
    }
    cout << "\n";

    cout << "Min Heap extraction order: ";
    while (!minHeap.empty())
    {
        cout << minHeap.extractMin() << " ";
    }
    cout << "\n\n";

    cout << "=== MAX HEAP IMPLEMENTATION ===\n";

    MaxHeap maxHeap;

    cout << "Inserting: ";
    for (int val : data)
    {
        cout << val << " ";
        maxHeap.insert(val);
    }
    cout << "\n";

    cout << "Max Heap extraction order: ";
    while (!maxHeap.empty())
    {
        cout << maxHeap.extractMax() << " ";
    }
    cout << "\n\n";

    cout << "=== STL PRIORITY QUEUE EXAMPLES ===\n";

    // Default priority queue (max heap)
    cout << "STL Max Heap (default): ";
    priority_queue<int> stlMaxHeap;
    for (int val : data)
        stlMaxHeap.push(val);
    while (!stlMaxHeap.empty())
    {
        cout << stlMaxHeap.top() << " ";
        stlMaxHeap.pop();
    }
    cout << "\n";

    // Min heap using greater comparator
    cout << "STL Min Heap (greater<int>): ";
    priority_queue<int, vector<int>, greater<int>> stlMinHeap;
    for (int val : data)
        stlMinHeap.push(val);
    while (!stlMinHeap.empty())
    {
        cout << stlMinHeap.top() << " ";
        stlMinHeap.pop();
    }
    cout << "\n\n";

    cout << "=== CUSTOM STRUCT COMPARATOR EXAMPLE ===\n";

    // Custom comparator for special ordering
    vector<int> numbers = {12, 7, 18, 3, 25, 14, 9};
    priority_queue<int, vector<int>, CustomComparator> customHeap;

    cout << "Numbers with custom ordering (even min-heap, odd max-heap):\n";
    cout << "Input numbers: ";
    for (int num : numbers)
    {
        cout << num << " ";
        customHeap.push(num);
    }
    cout << "\n";

    cout << "Output order (even numbers ascending, odd numbers descending):\n";
    while (!customHeap.empty())
    {
        int curr = customHeap.top();
        customHeap.pop();
        cout << curr << " ";
    }

    cout << "\n\n=== REAL WORLD EXAMPLE ===\n";
    cout << "Task Priority System - Custom priority based on task ID:\n";

    // Simulate task IDs with custom priority
    vector<int> tasks = {101, 205, 108, 309, 412, 207};
    priority_queue<int, vector<int>, CustomComparator> taskQueue;

    for (int task : tasks)
    {
        taskQueue.push(task);
        cout << "Task " << task << " added (";
        if (task % 2 == 0)
            cout << "even - system task";
        else
            cout << "odd - user task";
        cout << ")\n";
    }

    cout << "\nExecution order (system tasks by urgency, user tasks by importance):\n";
    int order = 1;
    while (!taskQueue.empty())
    {
        int task = taskQueue.top();
        taskQueue.pop();
        cout << order++ << ". Task " << task;
        if (task % 2 == 0)
            cout << " (system)";
        else
            cout << " (user)";
        cout << "\n";
    }

    return 0;
}