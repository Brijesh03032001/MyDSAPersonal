# Search a 2D Matrix

**Difficulty:** Medium  
**URL:** [search-a-2d-matrix](https://leetcode.com/problems/search-a-2d-matrix/)  
**Tags:** Array, Binary Search, Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an m x n integer matrix matrix with the following two properties:


	Each row is sorted in non-decreasing order.
	The first integer of each row is greater than the last integer of the previous row.


Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

&nbsp;
Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true


Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false


&nbsp;
Constraints:


	m == matrix.length
	
