
/*
================================================================================
                    PRIORITY QUEUE WITH PAIRS - COMPLETE GUIDE
================================================================================
Author: Brijesh Kumar
Purpose: Educational resource for understanding all operations with pair in priority queue
Target Audience: Students preparing for competitive programming and interviews

This comprehensive guide covers:
1. Basic Priority Queue with Pairs
2. Custom Comparators for Different Orderings
3. All Standard Operations with Detailed Examples
4. Real-world Applications and Use Cases
5. Time and Space Complexity Analysis
6. Common Pitfalls and Best Practices

================================================================================
                                INTRODUCTION
================================================================================

Priority Queue with pairs is an essential data structure in competitive programming.
By default, C++ priority_queue is a MAX heap that orders elements by:
1. First element of pair (descending)
2. If first elements are equal, then by second element (descending)

For pairs (a,b) and (c,d):
- (a,b) has higher priority than (c,d) if:
  * a > c, OR
  * a == c AND b > d

================================================================================
*/

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

// ================================ UTILITY MACROS ================================
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pci pair<char, int>
#define psi pair<string, int>
#define vi vector<int>
#define vpii vector<pii>

// Display utilities
#define DIVIDER cout << "\n" \
                     << string(80, '=') << "\n"
#define SECTION(title) cout << "\n" \
                            << string(20, '-') << " " << title << " " << string(20, '-') << "\n"

class PairHeapOperations
{
public:
    /*
    ================================================================================
                            1. BASIC PRIORITY QUEUE WITH PAIRS
    ================================================================================
    */

    void basicOperationsDemo()
    {
        SECTION("BASIC OPERATIONS WITH DEFAULT MAX HEAP");

        // Default priority queue - MAX heap for pairs
        priority_queue<pii> maxHeap;

        cout << "📚 OPERATION: push() - Adding pairs to max heap\n";
        cout << "Adding pairs: (3,4), (1,5), (3,2), (2,1)\n";

        maxHeap.push({3, 4});          // Pair constructor
        maxHeap.push(make_pair(1, 5)); // Using make_pair
        maxHeap.push({3, 2});
        maxHeap.push({2, 1});

        cout << "📊 Current heap size: " << maxHeap.size() << "\n";
        cout << "🎯 Top element (highest priority): (" << maxHeap.top().first
             << ", " << maxHeap.top().second << ")\n";

        cout << "\n📋 Priority order (MAX heap - descending):\n";
        int position = 1;
        while (!maxHeap.empty())
        {
            auto current = maxHeap.top();
            cout << position++ << ". (" << current.first << ", " << current.second << ")\n";
            maxHeap.pop();
        }

        cout << "\n💡 Explanation:\n";
        cout << "- (3,4) comes first because first element (3) is highest\n";
        cout << "- (3,2) comes next because first element is same (3) but second (4 > 2)\n";
        cout << "- (2,1) comes third because first element (2) < 3\n";
        cout << "- (1,5) comes last because first element (1) is smallest\n";
    }

    /*
    ================================================================================
                        2. CUSTOM COMPARATORS FOR DIFFERENT ORDERINGS
    ================================================================================
    */

    void customComparatorsDemo()
    {
        SECTION("CUSTOM COMPARATORS FOR DIFFERENT ORDERINGS");

        // Sample data for all demonstrations
        vector<pii> sampleData = {{3, 4}, {1, 5}, {3, 2}, {2, 1}, {1, 3}, {2, 5}};

        // 1. MIN HEAP (opposite of default)
        cout << "🔸 1. MIN HEAP - Smallest pair first:\n";
        priority_queue<pii, vector<pii>, greater<pii>> minHeap;
        for (auto &p : sampleData)
        {
            minHeap.push(p);
        }

        cout << "Order: ";
        while (!minHeap.empty())
        {
            auto p = minHeap.top();
            minHeap.pop();
            cout << "(" << p.first << "," << p.second << ") ";
        }

        // 2. ORDER BY SECOND ELEMENT FIRST (MAX)
        cout << "\n🔸 2. ORDER BY SECOND ELEMENT FIRST (MAX):\n";
        auto cmp2 = [](const pii &a, const pii &b)
        {
            if (a.second != b.second)
                return a.second < b.second;
            return a.first < b.first;
        };
        priority_queue<pii, vector<pii>, decltype(cmp2)> secondMaxHeap(cmp2);
        for (auto &p : sampleData)
        {
            secondMaxHeap.push(p);
        }

        cout << "Order: ";
        while (!secondMaxHeap.empty())
        {
            auto p = secondMaxHeap.top();
            secondMaxHeap.pop();
            cout << "(" << p.first << "," << p.second << ") ";
        }

        // 3. ORDER BY SECOND ELEMENT FIRST (MIN)
        cout << "\n🔸 3. ORDER BY SECOND ELEMENT FIRST (MIN):\n";
        auto cmp3 = [](const pii &a, const pii &b)
        {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first > b.first;
        };
        priority_queue<pii, vector<pii>, decltype(cmp3)> secondMinHeap(cmp3);
        for (auto &p : sampleData)
        {
            secondMinHeap.push(p);
        }

        cout << "Order: ";
        while (!secondMinHeap.empty())
        {
            auto p = secondMinHeap.top();
            secondMinHeap.pop();
            cout << "(" << p.first << "," << p.second << ") ";
        }

        // 4. ORDER BY SUM (MAX)
        cout << "\n🔸 4. ORDER BY SUM OF PAIRS (MAX):\n";
        auto cmp4 = [](const pii &a, const pii &b)
        {
            int sumA = a.first + a.second;
            int sumB = b.first + b.second;
            if (sumA != sumB)
                return sumA < sumB;
            return a.first < b.first; // tiebreaker
        };
        priority_queue<pii, vector<pii>, decltype(cmp4)> sumMaxHeap(cmp4);
        for (auto &p : sampleData)
        {
            sumMaxHeap.push(p);
        }

        cout << "Order (sum in parentheses): ";
        while (!sumMaxHeap.empty())
        {
            auto p = sumMaxHeap.top();
            sumMaxHeap.pop();
            cout << "(" << p.first << "," << p.second << ")[" << p.first + p.second << "] ";
        }

        // 5. ORDER BY DIFFERENCE (MAX)
        cout << "\n🔸 5. ORDER BY DIFFERENCE |first - second| (MAX):\n";
        auto cmp5 = [](const pii &a, const pii &b)
        {
            int diffA = abs(a.first - a.second);
            int diffB = abs(b.first - b.second);
            if (diffA != diffB)
                return diffA < diffB;
            return a.first < b.first; // tiebreaker
        };
        priority_queue<pii, vector<pii>, decltype(cmp5)> diffMaxHeap(cmp5);
        for (auto &p : sampleData)
        {
            diffMaxHeap.push(p);
        }

        cout << "Order (diff in parentheses): ";
        while (!diffMaxHeap.empty())
        {
            auto p = diffMaxHeap.top();
            diffMaxHeap.pop();
            cout << "(" << p.first << "," << p.second << ")[" << abs(p.first - p.second) << "] ";
        }
        cout << "\n";
    }

    /*
    ================================================================================
                            3. ALL STANDARD OPERATIONS
    ================================================================================
    */

    void allStandardOperations()
    {
        SECTION("ALL STANDARD OPERATIONS DETAILED GUIDE");

        priority_queue<pii> pq;

        cout << "📋 OPERATION 1: empty() - Check if priority queue is empty\n";
        cout << "pq.empty() = " << (pq.empty() ? "true" : "false") << "\n";
        cout << "Use case: Loop condition, validation before operations\n\n";

        cout << "📋 OPERATION 2: size() - Get number of elements\n";
        cout << "pq.size() = " << pq.size() << "\n";
        cout << "Use case: Memory usage tracking, algorithm optimization\n\n";

        cout << "📋 OPERATION 3: push() - Insert elements\n";
        cout << "Methods to insert pairs:\n";
        cout << "  • pq.push({a, b})         - Direct initialization\n";
        cout << "  • pq.push(make_pair(a,b)) - Using make_pair function\n";
        cout << "  • pq.push(pair<int,int>(a,b)) - Explicit constructor\n";

        pq.push({10, 20});
        pq.push({15, 5});
        pq.push({10, 25});
        pq.push({8, 30});
        cout << "After pushing (10,20), (15,5), (10,25), (8,30):\n";
        cout << "Size: " << pq.size() << "\n\n";

        cout << "📋 OPERATION 4: top() - Access highest priority element\n";
        cout << "pq.top() = (" << pq.top().first << ", " << pq.top().second << ")\n";
        cout << "⚠️  Important: Always check !pq.empty() before calling top()\n";
        cout << "Use case: Get maximum/minimum element without removing\n\n";

        cout << "📋 OPERATION 5: pop() - Remove highest priority element\n";
        auto topElement = pq.top();
        pq.pop();
        cout << "Removed: (" << topElement.first << ", " << topElement.second << ")\n";
        cout << "New top: (" << pq.top().first << ", " << pq.top().second << ")\n";
        cout << "New size: " << pq.size() << "\n";
        cout << "⚠️  Important: pop() doesn't return the element, use top() first\n\n";

        cout << "📋 OPERATION 6: Iteration and Complete Extraction\n";
        cout << "Remaining elements in priority order:\n";
        int position = 1;
        while (!pq.empty())
        {
            auto current = pq.top();
            pq.pop();
            cout << position++ << ". (" << current.first << ", " << current.second << ")\n";
        }
    }

    /*
    ================================================================================
                            4. ADVANCED OPERATIONS AND TRICKS
    ================================================================================
    */

    void advancedOperationsDemo()
    {
        SECTION("ADVANCED OPERATIONS AND TRICKS");

        cout << "🔧 ADVANCED TECHNIQUE 1: Converting Priority Queue to Vector\n";
        priority_queue<pii> pq;
        pq.push({3, 1});
        pq.push({1, 4});
        pq.push({2, 2});

        vector<pii> sortedPairs;
        priority_queue<pii> pqCopy = pq; // Create copy to preserve original
        while (!pqCopy.empty())
        {
            sortedPairs.push_back(pqCopy.top());
            pqCopy.pop();
        }

        cout << "Sorted pairs: ";
        for (auto &p : sortedPairs)
        {
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << "\n\n";

        cout << "🔧 ADVANCED TECHNIQUE 2: K Largest/Smallest Elements\n";
        vector<pii> data = {{1, 2}, {3, 4}, {2, 1}, {5, 6}, {1, 3}, {4, 2}};
        int k = 3;

        // K largest elements using min heap of size k
        priority_queue<pii, vector<pii>, greater<pii>> kLargest;
        for (auto &p : data)
        {
            kLargest.push(p);
            if (kLargest.size() > k)
            {
                kLargest.pop();
            }
        }

        cout << "Top " << k << " largest pairs: ";
        vector<pii> result;
        while (!kLargest.empty())
        {
            result.push_back(kLargest.top());
            kLargest.pop();
        }
        reverse(result.begin(), result.end()); // Reverse to get descending order
        for (auto &p : result)
        {
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << "\n\n";

        cout << "🔧 ADVANCED TECHNIQUE 3: Merging Two Sorted Sequences\n";
        vector<pii> seq1 = {{1, 5}, {3, 2}, {4, 1}};
        vector<pii> seq2 = {{2, 3}, {3, 4}, {5, 1}};

        priority_queue<pii> merged;
        for (auto &p : seq1)
            merged.push(p);
        for (auto &p : seq2)
            merged.push(p);

        cout << "Merged sequence: ";
        while (!merged.empty())
        {
            auto p = merged.top();
            merged.pop();
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << "\n\n";

        cout << "🔧 ADVANCED TECHNIQUE 4: Priority Queue with Custom Objects\n";
        struct Task
        {
            string name;
            int priority;
            int deadline;

            // Constructor
            Task(string n, int p, int d) : name(n), priority(p), deadline(d) {}

            // Comparator for priority queue (higher priority first, then earlier deadline)
            bool operator<(const Task &other) const
            {
                if (priority != other.priority)
                    return priority < other.priority;
                return deadline > other.deadline;
            }
        };

        priority_queue<Task> taskQueue;
        taskQueue.push(Task("Code Review", 3, 5));
        taskQueue.push(Task("Bug Fix", 5, 2));
        taskQueue.push(Task("Documentation", 1, 10));
        taskQueue.push(Task("Testing", 4, 3));

        cout << "Tasks in priority order:\n";
        while (!taskQueue.empty())
        {
            Task t = taskQueue.top();
            taskQueue.pop();
            cout << "  " << t.name << " (Priority: " << t.priority
                 << ", Deadline: " << t.deadline << ")\n";
        }
    }

    /*
    ================================================================================
                            5. REAL-WORLD APPLICATIONS
    ================================================================================
    */

    void realWorldApplications()
    {
        SECTION("REAL-WORLD APPLICATIONS");

        cout << "🌟 APPLICATION 1: Dijkstra's Algorithm (Shortest Path)\n";
        cout << "Usage: priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>\n";
        cout << "Pairs: (distance, vertex) - Min heap to always process closest vertex\n\n";

        cout << "🌟 APPLICATION 2: Task Scheduling\n";
        cout << "Usage: priority_queue<pair<int,string>>\n";
        cout << "Pairs: (priority, task_name) - Max heap for highest priority tasks first\n\n";

        cout << "🌟 APPLICATION 3: Huffman Coding\n";
        cout << "Usage: priority_queue<pair<int,char>, vector<pair<int,char>>, greater<>>\n";
        cout << "Pairs: (frequency, character) - Min heap for building optimal tree\n\n";

        cout << "🌟 APPLICATION 4: Event Simulation\n";
        cout << "Usage: priority_queue<pair<int,Event>, vector<pair<int,Event>>, greater<>>\n";
        cout << "Pairs: (time, event) - Min heap to process events in chronological order\n\n";

        cout << "🌟 APPLICATION 5: Top K Problems\n";
        cout << "Example: Finding K closest points to origin\n";
        vector<pii> points = {{1, 1}, {3, 3}, {2, 2}, {4, 4}, {0, 1}};
        int k = 3;

        // Using max heap of size k to keep k smallest distances
        auto distanceComp = [](const pii &a, const pii &b)
        {
            int distA = a.first * a.first + a.second * a.second;
            int distB = b.first * b.first + b.second * b.second;
            return distA < distB; // Max heap
        };

        priority_queue<pii, vector<pii>, decltype(distanceComp)> closestPoints(distanceComp);

        for (auto &point : points)
        {
            closestPoints.push(point);
            if (closestPoints.size() > k)
            {
                closestPoints.pop();
            }
        }

        cout << "Top " << k << " closest points to origin:\n";
        vector<pii> finalResult;
        while (!closestPoints.empty())
        {
            finalResult.push_back(closestPoints.top());
            closestPoints.pop();
        }

        for (auto &point : finalResult)
        {
            int dist_sq = point.first * point.first + point.second * point.second;
            cout << "  (" << point.first << "," << point.second
                 << ") - Distance²: " << dist_sq << "\n";
        }
    }

    /*
    ================================================================================
                        6. TIME AND SPACE COMPLEXITY ANALYSIS
    ================================================================================
    */

    void complexityAnalysis()
    {
        SECTION("TIME AND SPACE COMPLEXITY ANALYSIS");

        cout << "⏰ TIME COMPLEXITIES:\n";
        cout << "┌─────────────────┬──────────────┬─────────────────────────────────────┐\n";
        cout << "│ Operation       │ Complexity   │ Explanation                         │\n";
        cout << "├─────────────────┼──────────────┼─────────────────────────────────────┤\n";
        cout << "│ push()          │ O(log n)     │ Insert and maintain heap property   │\n";
        cout << "│ pop()           │ O(log n)     │ Remove top and re-heapify           │\n";
        cout << "│ top()           │ O(1)         │ Access root element                 │\n";
        cout << "│ empty()         │ O(1)         │ Check if container is empty         │\n";
        cout << "│ size()          │ O(1)         │ Return number of elements           │\n";
        cout << "│ Construction    │ O(n log n)   │ Building heap from n elements       │\n";
        cout << "└─────────────────┴──────────────┴─────────────────────────────────────┘\n\n";

        cout << "💾 SPACE COMPLEXITY:\n";
        cout << "• Storage: O(n) where n is the number of pairs\n";
        cout << "• Each pair takes constant extra space\n";
        cout << "• No additional space for heap operations\n\n";

        cout << "📊 PERFORMANCE COMPARISON:\n";
        cout << "For n = 1,000,000 pairs:\n";
        cout << "• 1,000,000 insertions: ~20 * 1,000,000 = 20M operations\n";
        cout << "• 1,000,000 deletions: ~20 * 1,000,000 = 20M operations\n";
        cout << "• Total: ~40M operations (very efficient!)\n\n";

        cout << "⚡ OPTIMIZATION TIPS:\n";
        cout << "1. Reserve space when possible: Not directly available, but minimize reallocation\n";
        cout << "2. Use emplace() if available in future C++ versions\n";
        cout << "3. Batch operations when possible\n";
        cout << "4. Consider custom comparators for better cache locality\n";
    }

    /*
    ================================================================================
                        7. COMMON PITFALLS AND BEST PRACTICES
    ================================================================================
    */

    void pitfallsAndBestPractices()
    {
        SECTION("COMMON PITFALLS AND BEST PRACTICES");

        cout << "❌ COMMON PITFALLS:\n\n";

        cout << "1. 🚨 CALLING top() ON EMPTY QUEUE:\n";
        cout << "   ❌ Wrong: pq.top() without checking\n";
        cout << "   ✅ Right: if (!pq.empty()) { auto x = pq.top(); }\n\n";

        cout << "2. 🚨 FORGETTING pop() DOESN'T RETURN VALUE:\n";
        cout << "   ❌ Wrong: auto x = pq.pop(); // Compilation error!\n";
        cout << "   ✅ Right: auto x = pq.top(); pq.pop();\n\n";

        cout << "3. 🚨 INCORRECT COMPARATOR LOGIC:\n";
        cout << "   ❌ Wrong: return a.first > b.first; // Creates min heap\n";
        cout << "   ✅ Right: return a.first < b.first; // Creates max heap\n";
        cout << "   💡 Tip: Comparator returns true if first argument has LOWER priority\n\n";

        cout << "4. 🚨 MODIFYING ELEMENTS IN PRIORITY QUEUE:\n";
        cout << "   ❌ Wrong: Priority queue doesn't support modification\n";
        cout << "   ✅ Right: Remove, modify, and re-insert\n\n";

        cout << "5. 🚨 USING WRONG CONTAINER FOR SORTING:\n";
        cout << "   ❌ Wrong: Using priority_queue when you need full sorted sequence\n";
        cout << "   ✅ Right: Use sort() for full sorting, priority_queue for top-k problems\n\n";

        cout << "✅ BEST PRACTICES:\n\n";

        cout << "1. 📋 ALWAYS CHECK EMPTY BEFORE ACCESS:\n";
        priority_queue<pii> demoPq;
        cout << "   if (!pq.empty()) {\n";
        cout << "       auto topElement = pq.top();\n";
        cout << "       pq.pop();\n";
        cout << "   }\n\n";

        cout << "2. 📋 USE MEANINGFUL VARIABLE NAMES:\n";
        cout << "   ❌ Wrong: priority_queue<pii> pq;\n";
        cout << "   ✅ Right: priority_queue<pii> tasksByPriority;\n";
        cout << "   ✅ Right: priority_queue<pii, vector<pii>, greater<pii>> shortestDistances;\n\n";

        cout << "3. 📋 DOCUMENT YOUR COMPARATOR:\n";
        cout << "   // Comparator: Orders by second element (ascending), then first element (ascending)\n";
        cout << "   auto cmp = [](const pii& a, const pii& b) {\n";
        cout << "       if (a.second != b.second) return a.second > b.second;\n";
        cout << "       return a.first > b.first;\n";
        cout << "   };\n\n";

        cout << "4. 📋 USE CONST REFERENCES IN COMPARATORS:\n";
        cout << "   auto cmp = [](const pii& a, const pii& b) { /* ... */ };\n";
        cout << "   // Avoids unnecessary copying\n\n";

        cout << "5. 📋 PREFER {} INITIALIZATION:\n";
        cout << "   pq.push({value1, value2}); // Modern C++ style\n";
        cout << "   // Instead of pq.push(make_pair(value1, value2));\n\n";
    }

    /*
    ================================================================================
                            8. COMPREHENSIVE EXAMPLE
    ================================================================================
    */

    void comprehensiveExample()
    {
        SECTION("COMPREHENSIVE EXAMPLE: STUDENT GRADE MANAGEMENT");

        cout << "🎓 Scenario: Managing student grades with priority queue\n";
        cout << "Requirement: Process students by grade (highest first), then by roll number (lowest first)\n\n";

        // Custom comparator for our requirement
        auto studentComparator = [](const pair<int, int> &a, const pair<int, int> &b)
        {
            // a = (grade, roll_number), b = (grade, roll_number)
            if (a.first != b.first)
            {
                return a.first < b.first; // Higher grade has higher priority
            }
            return a.second > b.second; // Lower roll number has higher priority
        };

        priority_queue<pii, vector<pii>, decltype(studentComparator)> studentQueue(studentComparator);

        // Sample data: (grade, roll_number)
        vector<pii> students = {
            {85, 101}, {92, 105}, {85, 102}, {78, 103}, {92, 104}, {88, 106}, {85, 100}, {95, 107}};

        cout << "📥 Adding students to queue:\n";
        for (auto &student : students)
        {
            studentQueue.push(student);
            cout << "   Added: Grade " << student.first << ", Roll " << student.second << "\n";
        }

        cout << "\n🏆 Processing students in priority order:\n";
        cout << "Rank | Grade | Roll | Notes\n";
        cout << "-----|-------|------|------------------------\n";

        int rank = 1;
        while (!studentQueue.empty())
        {
            auto student = studentQueue.top();
            studentQueue.pop();

            cout << setw(4) << rank++ << " | "
                 << setw(5) << student.first << " | "
                 << setw(4) << student.second << " | ";

            if (student.first >= 90)
                cout << "Excellent Performance";
            else if (student.first >= 80)
                cout << "Good Performance";
            else
                cout << "Needs Improvement";

            cout << "\n";
        }

        cout << "\n💡 Observations:\n";
        cout << "• Grade 95 (Roll 107) processed first - highest grade\n";
        cout << "• Among Grade 92: Roll 104 before Roll 105 (lower roll number priority)\n";
        cout << "• Among Grade 85: Processed in roll number order (100, 101, 102)\n";
    }
};

/*
================================================================================
                                MAIN FUNCTION
================================================================================
*/

int main()
{
    cout << "🚀 PRIORITY QUEUE WITH PAIRS - COMPLETE EDUCATIONAL GUIDE 🚀\n";
    cout << "By: Brijesh Kumar | For: Students & Competitive Programmers\n";
    DIVIDER;

    PairHeapOperations demo;

    // Execute all demonstrations
    demo.basicOperationsDemo();
    DIVIDER;

    demo.customComparatorsDemo();
    DIVIDER;

    demo.allStandardOperations();
    DIVIDER;

    demo.advancedOperationsDemo();
    DIVIDER;

    demo.realWorldApplications();
    DIVIDER;

    demo.complexityAnalysis();
    DIVIDER;

    demo.pitfallsAndBestPractices();
    DIVIDER;

    demo.comprehensiveExample();
    DIVIDER;

    cout << "\n🎉 CONCLUSION:\n";
    cout << "You now have comprehensive knowledge of priority queue with pairs!\n";
    cout << "Practice these concepts with LeetCode problems:\n";
    cout << "• Top K Frequent Elements\n";
    cout << "• Merge K Sorted Lists\n";
    cout << "• Find K Closest Points to Origin\n";
    cout << "• Task Scheduler\n";
    cout << "• Dijkstra's Algorithm\n\n";

    cout << "🌟 Remember: The key to mastering data structures is consistent practice!\n";
    cout << "💻 Happy Coding! 💻\n";

    return 0;
}
