# Design Graph With Shortest Path Calculator

**Difficulty:** Hard  
**URL:** [design-graph-with-shortest-path-calculator](https://leetcode.com/problems/design-graph-with-shortest-path-calculator/)  
**Tags:** Graph Theory, Design, Heap (Priority Queue), Shortest Path

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There is a directed weighted graph that consists of n nodes numbered from 0 to n - 1. The edges of the graph are initially represented by the given array edges where edges[i] = [fromi, toi, edgeCosti] meaning that there is an edge from fromi to toi with the cost edgeCosti.

Implement the Graph class:


	Graph(int n, int[][] edges) initializes the object with n nodes and the given edges.
	addEdge(int[] edge) adds an edge to the list of edges where edge = [from, to, edgeCost]. It is guaranteed that there is no edge between the two nodes before adding this one.
	int shortestPath(int node1, int no
