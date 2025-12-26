# Longest Turbulent Subarray

**Difficulty:** Medium  
**URL:** [longest-turbulent-subarray](https://leetcode.com/problems/longest-turbulent-subarray/)  
**Tags:** Array, Dynamic Programming, Sliding Window

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer array arr, return the length of a maximum size turbulent subarray of arr.

A subarray is turbulent if the comparison sign flips between each adjacent pair of elements in the subarray.

More formally, a subarray [arr[i], arr[i + 1], ..., arr[j]] of arr is said to be turbulent if and only if:


	For i <= k < j:

	
		arr[k] > arr[k + 1] when k is odd, and
		arr[k] < arr[k + 1] when k is even.
	
	
	Or, for i <= k < j:
	
		arr[k] > arr[k + 1] when k is even, and
		arr[k] < arr[k + 1] when k is odd.
	
	


&nbsp;
Example 1:


Input: arr = [9,4,2,10,7,8,8,1,9]
Output: 5
Explanation: a
