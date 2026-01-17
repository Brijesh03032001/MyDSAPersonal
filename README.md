# DSA - Data Structures and Algorithms

[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://en.cppreference.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

A comprehensive collection of Data Structures and Algorithms implementations in C++. This repository contains well-documented solutions to various problems including graph algorithms, heap/priority queue operations, binary search implementations, and LeetCode solutions.

## 📚 Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Heap Operations](#heap-operations)
- [Binary Search](#binary-search)
- [Graph Algorithms](#graph-algorithms)
  - [Traversal Algorithms](#traversal-algorithms)
  - [Cycle Detection](#cycle-detection)
  - [LeetCode Problems](#leetcode-problems)
- [LeetCode Questions](#leetcode-questions)
- [Getting Started](#getting-started)
- [Compilation and Execution](#compilation-and-execution)
- [Contributing](#contributing)
- [License](#license)

## 🌟 Overview

This repository contains implementations of fundamental algorithms essential for competitive programming and technical interviews. All solutions are implemented in C++ with clear, readable code and comprehensive examples.

**Key Features:**
- **Priority Queue/Heap Operations** - Complete guide with struct-based comparators
- **Binary Search Algorithms** - Various search implementations
- **Graph Algorithms** - Traversal, cycle detection, and specialized problems
- **LeetCode Solutions** - Well-documented competitive programming solutions

## 📁 Repository Structure

```
DSA/
├── Leetcode_questions/
│   ├── Heap/
│   │   ├── PairHeapOperations.cpp          # Comprehensive heap guide
│   │   ├── PairHeap_StructComp_FirstElement.cpp
│   │   ├── PairHeap_StructComp_SecondElement.cpp  
│   │   ├── PairHeap_StructComp_Sum.cpp
│   │   ├── PairHeap_StructComp_Difference.cpp
│   │   └── run.sh                          # Compilation script
│   ├── BinarySearch/
│   │   ├── FindMinimumInRotatedSortedArray.cpp
│   │   ├── firstAndLast
│   │   ├── test.cpp
│   │   └── run.sh
│   ├── 2SumCountPairs.cpp
│   ├── 2SumWithPair_IndexStore.cpp
│   ├── BubbleSort.cpp
│   ├── HouseRobber.cpp
│   ├── StoneGame2.cpp
│   ├── SubsequenceOfAnotherString.cpp
│   └── template.cpp                        # Competitive programming template
├── Graphs/
│   ├── Traversal/
│   │   └── BFS_traversal_directed.cpp
│   ├── DetectCycle/
│   │   ├── BFS_directed_detect_cycle.cpp
│   │   ├── BFS_unidrected_detect_cycle.cpp
│   │   ├── DFS_directed_detect_cycle.cpp
│   │   ├── DFS_undirected_detect_cycle.cpp
│   │   ├── Detect_Cycle_Bipartite.cpp
│   │   └── Detect_Cycle_Disjoint_by_rank_compression.cpp
│   └── LeetcodeGraphQuestions/
│       ├── All_Paths_from_SourceToDestination.cpp
│       ├── Most_Stones_removed_with_same_row_or_column.cpp
│       └── Shortest_route_to_visted_boundary.cpp
├── input.txt
├── output.txt
└── README.md
```

## 🏗️ Heap Operations

### Priority Queue with Pairs - Complete Implementation

The heap section provides comprehensive examples of priority queue operations with pairs using struct-based comparators for beginner-friendly learning.

#### Core Files:

- **`PairHeapOperations.cpp`** - Complete educational guide with all pair operations
- **`PairHeap_StructComp_FirstElement.cpp`** - First element ordering comparators
- **`PairHeap_StructComp_SecondElement.cpp`** - Second element ordering comparators  
- **`PairHeap_StructComp_Sum.cpp`** - Sum-based ordering comparators
- **`PairHeap_StructComp_Difference.cpp`** - Difference-based ordering comparators

#### Features:
- Simple struct-based comparators (beginner-friendly)
- Real-world examples (task scheduling, game scoring, server load balancing)
- Minimal comments for clean code
- Ready-to-compile examples

#### Example Usage:
```cpp
struct FirstElementMin {
    constexpr bool operator()(const pii& a, const pii& b) const noexcept {
        return a.first > b.first;
    }
};

priority_queue<pii, vector<pii>, FirstElementMin> pq;
```

## 🔍 Binary Search

### Search Algorithms Implementation

- **`FindMinimumInRotatedSortedArray.cpp`** - LeetCode problem solution with optimized approach
- **`firstAndLast`** - Find first and last position of element
- **`test.cpp`** - Testing framework for binary search implementations

#### Key Features:
- Handles rotated arrays efficiently
- Template-based solutions for different data types
- Comprehensive testing with edge cases

## 🔄 Graph Algorithms

### Traversal Algorithms

#### Breadth-First Search (BFS)
- **File**: `Graphs/Traversal/BFS_traversal_directed.cpp`
- **Description**: Implementation of BFS for directed graphs
- **Key Features**:
  - Uses adjacency list representation with `map<int, vector<int>>`
  - Implements proper visited marking strategy
  - Queue-based traversal approach
  - **Time Complexity**: O(V + E)
  - **Space Complexity**: O(V)

### Cycle Detection

This section contains various algorithms to detect cycles in different types of graphs:

#### 1. DFS-based Cycle Detection (Directed Graph)
- **File**: `DetectCycle/DFS_directed_detect_cycle.cpp`
- **Algorithm**: Uses DFS with recursion stack tracking
- **Key Concept**: Detects back edges using `inRecursion` array
- **Time Complexity**: O(V + E)

#### 2. BFS-based Cycle Detection (Directed Graph)
- **File**: `DetectCycle/BFS_directed_detect_cycle.cpp`
- **Algorithm**: Kahn's algorithm for topological sorting
- **Key Concept**: If topological sort includes all vertices, no cycle exists

#### 3. DFS-based Cycle Detection (Undirected Graph)
- **File**: `DetectCycle/DFS_undirected_detect_cycle.cpp`
- **Algorithm**: DFS with parent tracking
- **Key Concept**: Detects back edges excluding parent connections

#### 4. BFS-based Cycle Detection (Undirected Graph)
- **File**: `DetectCycle/BFS_unidrected_detect_cycle.cpp`
- **Algorithm**: BFS with parent tracking

#### 5. Union-Find Cycle Detection
- **File**: `DetectCycle/Detect_Cycle_Disjoint_by_rank_compression.cpp`
- **Algorithm**: Disjoint Set Union with rank compression
- **Key Features**:
  - Path compression optimization
  - Union by rank for efficient merging
  - **Best for**: Edge-list representation of undirected graphs

#### 6. Bipartite Graph Cycle Detection
- **File**: `DetectCycle/Detect_Cycle_Bipartite.cpp`
- **Algorithm**: Detects odd-length cycles in graphs
- **Key Concept**: A graph is bipartite if and only if it contains no odd-length cycles

### LeetCode Problems

#### 1. All Paths From Source to Destination
- **File**: `LeetcodeGraphQuestions/All_Paths_from_SourceToDestination.cpp`
- **Problem**: Find all possible paths from source (node 0) to destination (last node)
- **Algorithm**: DFS with backtracking
- **LeetCode Link**: [797. All Paths From Source to Target](https://leetcode.com/problems/all-paths-from-source-to-target/)

#### 2. Most Stones Removed
- **File**: `LeetcodeGraphQuestions/Most_Stones_removed_with_same_row_or_column.cpp`
- **Problem**: Remove maximum stones that share same row or column
- **Algorithm**: Union-Find / Connected Components
- **LeetCode Link**: [947. Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)

#### 3. Shortest Route to Visit Boundary
- **File**: `LeetcodeGraphQuestions/Shortest_route_to_visted_boundary.cpp`
- **Problem**: Find shortest path to reach boundary
- **Algorithm**: BFS shortest path

## 💻 LeetCode Questions

### Array and String Problems
- **`2SumCountPairs.cpp`** - Count pairs with target sum
- **`2SumWithPair_IndexStore.cpp`** - Two sum with index tracking
- **`SubsequenceOfAnotherString.cpp`** - Check if string is subsequence
- **`BubbleSort.cpp`** - Classic sorting algorithm implementation

### Dynamic Programming
- **`HouseRobber.cpp`** - House robber problem with optimal substructure
- **`StoneGame2.cpp`** - Game theory problem with minimax approach

### Utilities
- **`template.cpp`** - Competitive programming template with macros and optimizations

## 🚀 Getting Started

### Prerequisites

- C++ compiler (GCC, Clang, or MSVC)
- C++11 or later standard support

### Installation

1. Clone the repository:
```bash
git clone https://github.com/Brijesh03032001/MyDSAPersonal.git
cd MyDSAPersonal
```

2. Navigate to the specific algorithm you want to run:
```bash
# For heap operations
cd Leetcode_questions/Heap

# For graph algorithms  
cd Graphs/Traversal

# For binary search
cd Leetcode_questions/BinarySearch
```

## ⚙️ Compilation and Execution

### Quick Start with Helper Scripts

```bash
# Heap operations - use provided script
cd Leetcode_questions/Heap
chmod +x run.sh
./run.sh

# Binary search solutions
cd Leetcode_questions/BinarySearch  
chmod +x run.sh
./run.sh
```

### Manual Compilation

```bash
# Basic compilation with relative path includes
g++ -O2 -std=c++17 -o output source.cpp

# Example: Compile heap comparators
g++ -O2 -std=c++17 PairHeap_StructComp_FirstElement.cpp -o heap_demo
./heap_demo

# Example: Compile binary search
g++ -O2 -std=c++17 FindMinimumInRotatedSortedArray.cpp -o search_demo
./search_demo
```

### With Input/Output Files

Some programs are designed to work with input files:

```bash
# Compile and run with input redirection
g++ -O2 -std=c++17 -o demo source.cpp
./demo < input.txt > output.txt
```

### Recommended Compilation Flags

```bash
g++ -std=c++17 -O2 -Wall -Wextra -fdiagnostics-color=always -o output source.cpp
```

## 📝 Code Style and Best Practices

- **Headers**: Uses `#include "../bits/stdc++.h"` with relative paths for consistency
- **Namespace**: `using namespace std;` for simplified syntax
- **Data Structures**: 
  - Adjacency lists using `vector<vector<int>>` or `map<int, vector<int>>`
  - STL containers for efficient operations
  - `typedef pair<int, int> pii;` for cleaner pair usage
- **Struct Comparators**: Clean, beginner-friendly struct pattern with `constexpr bool operator()`
- **Comments**: Minimal essential comments for clean, readable code

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/AmazingFeature`)
3. **Add** your algorithm implementation with proper documentation
4. **Include** test cases and examples
5. **Commit** your changes (`git commit -m 'Add some AmazingFeature'`)
6. **Push** to the branch (`git push origin feature/AmazingFeature`)
7. **Open** a Pull Request

### Guidelines for Contributing

- Follow the existing code style and structure
- Add comprehensive comments explaining the algorithm
- Include time and space complexity analysis
- Provide example input/output where applicable
- Test your code thoroughly

## 📊 Algorithm Complexity Summary

| Algorithm | Time Complexity | Space Complexity | Best Use Case |
|-----------|----------------|------------------|---------------|
| **Heap Operations** |
| Priority Queue Insert/Extract | O(log n) | O(n) | Task scheduling, top-k problems |
| Heap Sort | O(n log n) | O(1) | In-place sorting |
| **Binary Search** |
| Binary Search | O(log n) | O(1) | Sorted array search |
| Search in Rotated Array | O(log n) | O(1) | Modified binary search |
| **Graph Algorithms** |
| BFS Traversal | O(V + E) | O(V) | Level-order traversal, shortest path |
| DFS Cycle Detection | O(V + E) | O(V) | Directed/Undirected cycle detection |
| Union-Find | O(α(n)) | O(V) | Dynamic connectivity, edge-based cycle detection |
| Topological Sort (BFS) | O(V + E) | O(V) | Directed acyclic graph validation |

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🔗 Useful Resources

- [GeeksforGeeks Graph Algorithms](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)
- [GeeksforGeeks Priority Queue](https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/)
- [LeetCode Graph Problems](https://leetcode.com/tag/graph/)
- [LeetCode Heap Problems](https://leetcode.com/tag/heap-priority-queue/)
- [LeetCode Binary Search Problems](https://leetcode.com/tag/binary-search/)
- [Competitive Programming Handbook](https://cses.fi/book/book.pdf)

## 📧 Contact

**Brijesh Kumar** - [GitHub Profile](https://github.com/Brijesh03032001)

Project Link: [https://github.com/Brijesh03032001/MyDSAPersonal](https://github.com/Brijesh03032001/MyDSAPersonal)

---

⭐ **Star this repository if you find it helpful!**
