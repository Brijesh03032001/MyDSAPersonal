# Longest Mountain in Array

**Difficulty:** Medium  
**URL:** [longest-mountain-in-array](https://leetcode.com/problems/longest-mountain-in-array/)  
**Tags:** Array, Two Pointers, Dynamic Programming, Enumeration

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You may recall that an array arr is a mountain array if and only if:


	arr.length >= 3
	There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
	
		arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
		arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
	
	


Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

&nbsp;
Example 1:


Input: arr = [2,1,4,7,3,2,5]
Output: 5
Explanation: The largest mountain is [1,4,7,3,2] which has length 5.


Example 2:


Input: arr = [2,2,2]
Output: 0
Explanation: There i
