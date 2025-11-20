# Contains Duplicate III

**Difficulty:** Hard  
**URL:** [contains-duplicate-iii](https://leetcode.com/problems/contains-duplicate-iii/)  
**Tags:** Array, Sliding Window, Sorting, Bucket Sort, Ordered Set

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an integer array nums and two integers indexDiff and valueDiff.

Find a pair of indices (i, j) such that:


	i != j,
	abs(i - j) <= indexDiff.
	abs(nums[i] - nums[j]) <= valueDiff, and


Return true if such pair exists or false otherwise.

&nbsp;
Example 1:


Input: nums = [1,2,3,1], indexDiff = 3, valueDiff = 0
Output: true
Explanation: We can choose (i, j) = (0, 3).
We satisfy the three conditions:
i != j --> 0 != 3
abs(i - j) <= indexDiff --> abs(0 - 3) <= 3
abs(nums[i] - nums[j]) <= valueDiff --> abs(1 - 1) <= 0


Example 2:


Input: nums = [1,5,9,1,5,9], indexDiff = 2, value
