# Find the Degree of Each Vertex

**Difficulty:** Easy  
**URL:** [find-the-degree-of-each-vertex](https://leetcode.com/problems/find-the-degree-of-each-vertex/)  
**Tags:** —

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 2D integer array matrix of size n x n representing the adjacency matrix of an undirected graph with n vertices labeled from 0 to n - 1.


	matrix[i][j] = 1 indicates that there is an edge between vertices i and j.
	matrix[i][j] = 0 indicates that there is no edge between vertices i and j.


The degree of a vertex is the number of edges connected to it.

Return an integer array ans of size n where ans[i] represents the degree of vertex i.

&nbsp;
Example 1:




Input: matrix = [[0,1,1],[1,0,1],[1,1,0]]

Output: [2,2,2]

Explanation:


	Vertex 0 is connected to vertices 1 and 2, 
