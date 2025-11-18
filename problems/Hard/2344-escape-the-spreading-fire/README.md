# Escape the Spreading Fire

**Difficulty:** Hard  
**URL:** [escape-the-spreading-fire](https://leetcode.com/problems/escape-the-spreading-fire/)  
**Tags:** Array, Binary Search, Breadth-First Search, Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed 2D integer array grid of size m x n which represents a field. Each cell has one of three values:


	0 represents grass,
	1 represents fire,
	2 represents a wall that you and fire cannot pass through.


You are situated in the top-left cell, (0, 0), and you want to travel to the safehouse at the bottom-right cell, (m - 1, n - 1). Every minute, you may move to an adjacent grass cell. After your move, every fire cell will spread to all adjacent cells that are not walls.

Return the maximum number of minutes that you can stay in your initial position before moving while s
