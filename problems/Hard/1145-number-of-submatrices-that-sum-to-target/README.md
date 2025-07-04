# Number of Submatrices That Sum to Target

**Difficulty:** Hard  
**URL:** [number-of-submatrices-that-sum-to-target](https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/)  
**Tags:** Array, Hash Table, Matrix, Prefix Sum

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given a matrix&nbsp;and a target, return the number of non-empty submatrices that sum to target.

A submatrix x1, y1, x2, y2 is the set of all cells matrix[x][y] with x1 <= x <= x2 and y1 <= y <= y2.

Two submatrices (x1, y1, x2, y2) and (x1', y1', x2', y2') are different if they have some coordinate&nbsp;that is different: for example, if x1 != x1'.

&nbsp;
Example 1:


Input: matrix = [[0,1,0],[1,1,1],[0,1,0]], target = 0
Output: 4
Explanation: The four 1x1 submatrices that only contain 0.


Example 2:


Input: matrix = [[1,-1],[-1,1]], target = 0
Output: 5
Explanation: The two 1x2 submatric
