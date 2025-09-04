# Minimum Number of Operations to Make Array Continuous

**Difficulty:** Hard  
**URL:** [minimum-number-of-operations-to-make-array-continuous](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/)  
**Tags:** Array, Hash Table, Binary Search, Sliding Window

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an integer array nums. In one operation, you can replace any element in nums with any integer.

nums is considered continuous if both of the following conditions are fulfilled:


	All elements in nums are unique.
	The difference between the maximum element and the minimum element in nums equals nums.length - 1.


For example, nums = [4, 2, 5, 3] is continuous, but nums = [1, 2, 3, 5, 6] is not continuous.

Return the minimum number of operations to make nums continuous.

&nbsp;
Example 1:


Input: nums = [4,2,5,3]
Output: 0
Explanation:&nbsp;nums is already continuous.


Example 
