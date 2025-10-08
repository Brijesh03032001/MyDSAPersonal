# Number of Good Paths

**Difficulty:** Hard  
**URL:** [number-of-good-paths](https://leetcode.com/problems/number-of-good-paths/)  
**Tags:** Array, Hash Table, Tree, Union-Find, Graph Theory, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There is a tree (i.e. a connected, undirected graph with no cycles) consisting of n nodes numbered from 0 to n - 1 and exactly n - 1 edges.

You are given a 0-indexed integer array vals of length n where vals[i] denotes the value of the ith node. You are also given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting nodes ai and bi.

A good path is a simple path that satisfies the following conditions:


	The starting node and the ending node have the same value.
	All nodes between the starting node and the ending node have values less tha
