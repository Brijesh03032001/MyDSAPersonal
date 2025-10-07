# Cherry Pickup II

**Difficulty:** Hard  
**URL:** [cherry-pickup-ii](https://leetcode.com/problems/cherry-pickup-ii/)  
**Tags:** Array, Dynamic Programming, Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a rows x cols matrix grid representing a field of cherries where grid[i][j] represents the number of cherries that you can collect from the (i, j) cell.

You have two robots that can collect cherries for you:


	Robot #1 is located at the top-left corner (0, 0), and
	Robot #2 is located at the top-right corner (0, cols - 1).


Return the maximum number of cherries collection using both robots by following the rules below:


	From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1).
	When any robot passes through a cell, It picks up all cherries, a
