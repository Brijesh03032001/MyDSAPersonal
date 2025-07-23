# Minimum Number of Operations to Make Array Empty

**Difficulty:** Medium  
**URL:** [minimum-number-of-operations-to-make-array-empty](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/)  
**Tags:** Array, Hash Table, Greedy, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed array nums consisting of positive integers.

There are two types of operations that you can apply on the array any number of times:


	Choose two elements with equal values and delete them from the array.
	Choose three elements with equal values and delete them from the array.


Return the minimum number of operations required to make the array empty, or -1 if it is not possible.

&nbsp;
Example 1:


Input: nums = [2,3,3,2,2,4,2,3,4]
Output: 4
Explanation: We can apply the following operations to make the array empty:
- Apply the first operation on the elements at ind
