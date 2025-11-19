# Maximum Number of Points From Grid Queries

**Difficulty:** Hard  
**URL:** [maximum-number-of-points-from-grid-queries](https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/)  
**Tags:** Array, Two Pointers, Breadth-First Search, Union-Find, Sorting, Heap (Priority Queue), Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an m x n integer matrix grid and an array queries of size k.

Find an array answer of size k such that for each integer queries[i] you start in the top left cell of the matrix and repeat the following process:


	If queries[i] is strictly greater than the value of the current cell that you are in, then you get one point if it is your first time visiting this cell, and you can move to any adjacent cell in all 4 directions: up, down, left, and right.
	Otherwise, you do not get any points, and you end this process.


After the process, answer[i] is the maximum number of points you c
