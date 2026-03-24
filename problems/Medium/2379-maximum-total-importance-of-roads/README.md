# Maximum Total Importance of Roads

**Difficulty:** Medium  
**URL:** [maximum-total-importance-of-roads](https://leetcode.com/problems/maximum-total-importance-of-roads/)  
**Tags:** Greedy, Graph Theory, Sorting, Heap (Priority Queue)

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an integer n denoting the number of cities in a country. The cities are numbered from 0 to n - 1.

You are also given a 2D integer array roads where roads[i] = [ai, bi] denotes that there exists a bidirectional road connecting cities ai and bi.

You need to assign each city with an integer value from 1 to n, where each value can only be used once. The importance of a road is then defined as the sum of the values of the two cities it connects.

Return the maximum total importance of all roads possible after assigning the values optimally.

&nbsp;
Example 1:


Input: n = 5, roads =
