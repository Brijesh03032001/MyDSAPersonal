# Find Eventual Safe States

**Difficulty:** Medium  
**URL:** [find-eventual-safe-states](https://leetcode.com/problems/find-eventual-safe-states/)  
**Tags:** Depth-First Search, Breadth-First Search, Graph Theory, Topological Sort

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i].

A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).

Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

&nbsp;
Example 1:


Input: graph = [[1,2],[2,3
