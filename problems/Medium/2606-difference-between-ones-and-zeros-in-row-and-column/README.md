# Difference Between Ones and Zeros in Row and Column

**Difficulty:** Medium  
**URL:** [difference-between-ones-and-zeros-in-row-and-column](https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/)  
**Tags:** Array, Matrix, Simulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed m x n binary matrix grid.

A 0-indexed m x n difference matrix diff is created with the following procedure:


	Let the number of ones in the ith row be onesRowi.
	Let the number of ones in the jth column be onesColj.
	Let the number of zeros in the ith row be zerosRowi.
	Let the number of zeros in the jth column be zerosColj.
	diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj


Return the difference matrix diff.

&nbsp;
Example 1:


Input: grid = [[0,1,1],[1,0,1],[0,0,1]]
Output: [[0,0,4],[0,0,4],[-2,-2,2]]
Explanation:
- diff[0][0] = onesRow0 + onesCol0 - zer
