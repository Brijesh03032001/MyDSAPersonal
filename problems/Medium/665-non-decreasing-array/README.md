# Non-decreasing Array

**Difficulty:** Medium  
**URL:** [non-decreasing-array](https://leetcode.com/problems/non-decreasing-array/)  
**Tags:** Array

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element.

We define an array is non-decreasing if nums[i] <= nums[i + 1] holds for every i (0-based) such that (0 <= i <= n - 2).

&nbsp;
Example 1:


Input: nums = [4,2,3]
Output: true
Explanation: You could modify the first 4 to 1 to get a non-decreasing array.


Example 2:


Input: nums = [4,2,1]
Output: false
Explanation: You cannot get a non-decreasing array by modifying at most one element.


&nbsp;
Constraints:


	n == nums.length
	1 <= n <= 104
	-105 <= nums[i] <= 105
