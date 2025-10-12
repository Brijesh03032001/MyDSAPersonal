# Minimum Replacements to Sort the Array

**Difficulty:** Hard  
**URL:** [minimum-replacements-to-sort-the-array](https://leetcode.com/problems/minimum-replacements-to-sort-the-array/)  
**Tags:** Array, Math, Greedy

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed integer array nums. In one operation you can replace any element of the array with any two elements that sum to it.


	For example, consider nums = [5,6,7]. In one operation, we can replace nums[1] with 2 and 4 and convert nums to [5,2,4,7].


Return the minimum number of operations to make an array that is sorted in non-decreasing order.

&nbsp;
Example 1:


Input: nums = [3,9,3]
Output: 2
Explanation: Here are the steps to sort the array in non-decreasing order:
- From [3,9,3], replace the 9 with 3 and 6 so the array becomes [3,3,6,3]
- From [3,3,6,3], replace the 6
