# Construct Target Array With Multiple Sums

**Difficulty:** Hard  
**URL:** [construct-target-array-with-multiple-sums](https://leetcode.com/problems/construct-target-array-with-multiple-sums/)  
**Tags:** Array, Heap (Priority Queue)

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an array target of n integers. From a starting array arr consisting of n 1's, you may perform the following procedure :


	let x be the sum of all elements currently in your array.
	choose index i, such that 0 <= i < n and set the value of arr at index i to x.
	You may repeat this procedure as many times as needed.


Return true if it is possible to construct the target array from arr, otherwise, return false.

&nbsp;
Example 1:


Input: target = [9,3,5]
Output: true
Explanation: Start with arr = [1, 1, 1] 
[1, 1, 1], sum = 3 choose index 1
[1, 3, 1], sum = 5 choose index 2
[1, 3
