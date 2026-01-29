# Running Sum of 1d Array

**Difficulty:** Easy  
**URL:** [running-sum-of-1d-array](https://leetcode.com/problems/running-sum-of-1d-array/)  
**Tags:** Array, Prefix Sum

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array nums. We define a running sum of an array as&nbsp;runningSum[i] = sum(nums[0]&hellip;nums[i]).

Return the running sum of nums.

&nbsp;
Example 1:


Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2:


Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

Example 3:


Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]


&nbsp;
Constraints:


	1 <= nums.length <= 1000
	-10^6&nbsp;<= nums[i] <=&nbsp;10^6
