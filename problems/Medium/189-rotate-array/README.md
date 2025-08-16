# Rotate Array

**Difficulty:** Medium  
**URL:** [rotate-array](https://leetcode.com/problems/rotate-array/)  
**Tags:** Array, Math, Two Pointers

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

&nbsp;
Example 1:


Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


Example 2:


Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]


&nbsp;
Constraints:


	1 <= nums.length <= 105
	-231 <= nums[i] <= 231 - 1
	0 <= k <= 105


&nbs
