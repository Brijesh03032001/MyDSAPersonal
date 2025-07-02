# Contains Duplicate II

**Difficulty:** Easy  
**URL:** [contains-duplicate-ii](https://leetcode.com/problems/contains-duplicate-ii/)  
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

Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

&nbsp;
Example 1:


Input: nums = [1,2,3,1], k = 3
Output: true


Example 2:


Input: nums = [1,0,1,1], k = 1
Output: true


Example 3:


Input: nums = [1,2,3,1,2,3], k = 2
Output: false


&nbsp;
Constraints:


	1 <= nums.length <= 105
	-109 <= nums[i] <= 109
	0 <= k <= 105
