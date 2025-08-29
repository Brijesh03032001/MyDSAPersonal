# Constrained Subsequence Sum

**Difficulty:** Hard  
**URL:** [constrained-subsequence-sum](https://leetcode.com/problems/constrained-subsequence-sum/)  
**Tags:** Array, Dynamic Programming, Queue, Sliding Window, Heap (Priority Queue), Monotonic Queue

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer array nums and an integer k, return the maximum sum of a non-empty subsequence of that array such that for every two consecutive integers in the subsequence, nums[i] and nums[j], where i < j, the condition j - i <= k is satisfied.

A subsequence of an array is obtained by deleting some number of elements (can be zero) from the array, leaving the remaining elements in their original order.

&nbsp;
Example 1:


Input: nums = [10,2,-10,5,20], k = 2
Output: 37
Explanation: The subsequence is [10, 2, 5, 20].


Example 2:


Input: nums = [-1,-2,-3], k = 1
Output: -1
Explanation: The
