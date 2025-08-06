# Jump Game II

**Difficulty:** Medium  
**URL:** [jump-game-ii](https://leetcode.com/problems/jump-game-ii/)  
**Tags:** Array, Dynamic Programming, Greedy

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed array of integers nums of length n. You are initially positioned at&nbsp;index 0.

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i, you can jump to any index (i + j)&nbsp;where:


	0 <= j <= nums[i] and
	i + j < n


Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index&nbsp;n - 1.

&nbsp;
Example 1:


Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1
