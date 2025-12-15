# As Far from Land as Possible

**Difficulty:** Medium  
**URL:** [as-far-from-land-as-possible](https://leetcode.com/problems/as-far-from-land-as-possible/)  
**Tags:** Array, Dynamic Programming, Breadth-First Search, Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an n x n grid&nbsp;containing only values 0 and 1, where&nbsp;0 represents water&nbsp;and 1 represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance.&nbsp;If no land or water exists in the grid, return -1.

The distance used in this problem is the Manhattan distance:&nbsp;the distance between two cells (x0, y0) and (x1, y1) is |x0 - x1| + |y0 - y1|.

&nbsp;
Example 1:


Input: grid = [[1,0,1],[0,0,0],[1,0,1]]
Output: 2
Explanation: The cell (1, 1) is as far as possible from all the land with distance 2.


Example 2:


Input:
