# Number of Good Pairs

**Difficulty:** Easy  
**URL:** [number-of-good-pairs](https://leetcode.com/problems/number-of-good-pairs/)  
**Tags:** Array, Hash Table, Math, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

&nbsp;
Example 1:


Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.


Example 2:


Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.


Example 3:


Input: nums = [1,2,3]
Output: 0


&nbsp;
Constraints:


	1 <= nums.length <= 100
	1 <= nums[i] <= 100
