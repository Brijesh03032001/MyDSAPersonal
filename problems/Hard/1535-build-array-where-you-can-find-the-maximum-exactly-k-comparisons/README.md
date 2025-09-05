# Build Array Where You Can Find The Maximum Exactly K Comparisons

**Difficulty:** Hard  
**URL:** [build-array-where-you-can-find-the-maximum-exactly-k-comparisons](https://leetcode.com/problems/build-array-where-you-can-find-the-maximum-exactly-k-comparisons/)  
**Tags:** Dynamic Programming, Prefix Sum

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given three integers n, m and k. Consider the following algorithm to find the maximum element of an array of positive integers:

You should build the array arr which has the following properties:


	arr has exactly n integers.
	1 <= arr[i] <= m where (0 <= i < n).
	After applying the mentioned algorithm to arr, the value search_cost is equal to k.


Return the number of ways to build the array arr under the mentioned conditions. As the answer may grow large, the answer must be computed modulo 109 + 7.

&nbsp;
Example 1:


Input: n = 2, m = 3, k = 1
Output: 6
Explanation: The possible a
