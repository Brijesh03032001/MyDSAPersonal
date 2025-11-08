# Count Complete Subarrays in an Array

**Difficulty:** Medium  
**URL:** [count-complete-subarrays-in-an-array](https://leetcode.com/problems/count-complete-subarrays-in-an-array/)  
**Tags:** Array, Hash Table, Sliding Window

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an array nums consisting of positive integers.

We call a subarray of an array complete if the following condition is satisfied:


	The number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.


Return the number of complete subarrays.

A subarray is a contiguous non-empty part of an array.

&nbsp;
Example 1:


Input: nums = [1,3,1,2,2]
Output: 4
Explanation: The complete subarrays are the following: [1,3,1,2], [1,3,1,2,2], [3,1,2] and [3,1,2,2].


Example 2:


Input: nums = [5,5,5,5]
Output: 10
Explanation: The array consists on
